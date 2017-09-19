#include <iostream>
#include <cstdlib>
#include <locale>

#include "campo.hpp"
#include "forma.hpp"



using namespace std;

campo::campo(){
	vivo = 'E';
	morto = '-';

	int linha, coluna;

	for(linha = 0; linha < 56; linha++)
		for(coluna = 0; coluna < 220; coluna++)
			matriz[linha][coluna] = morto;
}

campo::campo(char vivo, char morto){
	this->vivo = vivo;
	this->morto = morto;

	int linha, coluna;
	
	for(linha = 0; linha < 56; linha++)
		for(coluna = 0; coluna < 220; coluna++)
			matriz[linha][coluna] = morto;
}

campo::~campo(){
}

char campo::getEstado(int linha, int coluna){
	return matriz[linha][coluna];
}

void campo::setViver(int linha, int coluna){
	matriz[linha][coluna] = vivo;
}

void campo::setMorrer(int linha, int coluna){
	matriz[linha][coluna] = morto;
}

char campo::getVivo(){
	return vivo;
}
char campo::getMorto(){
	return morto;
}


void campo::getMatriz(){
	system("clear");
	cout <<	"\t\t\t\t\t\t\t\t\t\t\t\t\t\tJOGO DA VIDA" << endl << endl;

	int linha, coluna;
	for (linha = 0; linha < 56; linha++){
		cout << "	";
		for (coluna = 0; coluna < 220; coluna++)
			cout << matriz[linha][coluna];
		cout << endl;
	}
}

void campo::acrescentaForma(forma organismo){
	int moverHorizontal = 0;
	int moverVertical = 0;

	char botao;
	
	while(botao != 't'){
		for(int contador = 0; contador < organismo.getQuantidadeCoordenadas(); contador++)
			matriz[organismo.getCoordenada_x(contador) + moverVertical][organismo.getCoordenada_y(contador) + moverHorizontal] = vivo;

		getMatriz();
		cout << endl << "\tutilize as teclas A,S,D,W para MOVER o organismo\t\t\t\t\t\tAperte T para terminar de ajustar\t\t\t\t\t\t(sempre aperte ENTER depois das teclas)" << endl;
		cout << endl << "\t\t\t\t\t\t\t\t\tÉ RECOMENDADO RETIRAR O ORGANISMO DO MEIO DO CAMPO SE FOR ACRESCRENTAR MAIS ORGANISMOS" <<endl;
		cin >> botao;
		botao = tolower(botao);

		if(botao != 't'){
			for(int contador = 0; contador < organismo.getQuantidadeCoordenadas(); contador++)
				matriz[organismo.getCoordenada_x(contador) + moverVertical][organismo.getCoordenada_y(contador) + moverHorizontal] = morto;

			switch (botao) {
		 	case 'a':
		    	moverHorizontal -= 1;
		    	break;
		  	case 'd':
		    	moverHorizontal += 1;
		    	break;
		    case 'w':
		    	moverVertical -= 1;
		    	break;
		    case 's':
		    	moverVertical += 1;
		 	}
			
		}
	}
}


campo * campo::regrasDoJogo(){
	int linha, coluna;
	int contagem;
	campo * complementar = new campo(vivo, morto);

	for (linha = 0; linha < 56; linha++)
			for (coluna = 0; coluna < 220; coluna++){
				contagem = 0;
				if (linha - 1 >= 0){
					if (getEstado(linha - 1, coluna) == vivo)
						contagem++;
					if (coluna - 1 >= 0)
						if (getEstado(linha - 1, coluna - 1) == vivo)
							contagem++;
					if (coluna + 1 < 220)
						if (getEstado(linha - 1, coluna + 1) == vivo)
							contagem++;
				}
				if (coluna - 1 >= 0)
					if(getEstado(linha, coluna - 1) == vivo)
						contagem++;
				if (coluna + 1 < 220)
					if(getEstado(linha, coluna + 1) == vivo)
						contagem++;
				if(linha + 1 < 56){
					if(getEstado(linha + 1, coluna) == vivo)
						contagem++;
					if(coluna - 1 >= 0)
						if(getEstado(linha + 1, coluna - 1) == vivo)
							contagem++;
					if(coluna + 1 < 220)
						if(getEstado(linha +1, coluna + 1) == vivo)
							contagem++;
				}
				
				if(getEstado(linha, coluna) == morto){
					if(contagem == 3){
						complementar->setViver(linha, coluna);
					}
				}else{
					if(contagem < 2 or contagem > 3){
						complementar->setMorrer(linha, coluna);
					}else{
						complementar->setViver(linha,coluna);
					}
				}
				
			}


		return complementar;
}