#include <iostream>
#include "campo.hpp"
#include "celula.hpp"
#include <string>
#include "forma.hpp"

using namespace std;

campo::campo(){
}

campo::~campo(){
}

char campo::getEstado(int linha, int coluna){
	return matriz[linha][coluna].getEstado();
}

void campo::setViver(int linha, int coluna){
	return matriz[linha][coluna].setViver();
}

void campo::setMorrer(int linha, int coluna){
	return matriz[linha][coluna].setMorrer();
}

void campo::setEstadoVivo(char vivo){
	int linha, coluna;

	celula::setEstadoVivo(vivo);

	for(linha = 0; linha < 57; linha++)
		for(coluna = 0; coluna < 220; coluna++)
			matriz[linha][coluna].setEstadoVivo(vivo);
}

void campo::setEstadoMorto(char morto){
	int linha, coluna;
	
	celula::setEstadoMorto(morto);
	
	for(linha = 0; linha < 57; linha++)
		for(coluna = 0; coluna < 220; coluna++)
			matriz[linha][coluna].setEstadoMorto(morto);
}

void campo::getMatriz(){
	cout <<	"\t\t\t\t\t\t\t\t\t\t\t\t\t\tJOGO DA VIDA" << endl << endl;

	int linha, coluna;
	for (linha = 0; linha < 57; linha++){
		cout << "	";
		for (coluna = 0; coluna < 220; coluna++)
			cout << matriz[linha][coluna].getEstado();
		cout << endl;
	}
	cout << endl << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tteste 1" << endl;
}

void campo::acrescentaForma(forma organismo){
	int moverHorizontal = 0;
	int moverVertical = 0;

	char botao;
	
	while(botao != 'p'){
		for(int contador = 0; contador < organismo.getQuantidadeCoordenadas(); contador++)
			matriz[organismo.getCoordenada_x(contador) + moverVertical][organismo.getCoordenada_y(contador) + moverHorizontal].setViver();

		getMatriz();
		cin >> botao;

		if(botao != 'p'){
			for(int contador = 0; contador < organismo.getQuantidadeCoordenadas(); contador++)
				matriz[organismo.getCoordenada_x(contador) + moverVertical][organismo.getCoordenada_y(contador) + moverHorizontal].setMorrer();


			if(botao == 'a')
				moverHorizontal -= 1;
			else 
				if (botao == 'd')
					moverHorizontal += 1;
				else
					if(botao == 'w')
						moverVertical -= 1;
					else
						if(botao == 's')
							moverVertical += 1;	
			
		}
	}
}

