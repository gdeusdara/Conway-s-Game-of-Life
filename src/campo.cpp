#include <iostream>
#include "campo.hpp"
#include "celula.hpp"
#include <string>

using namespace std;

campo::campo(){
}

campo::~campo(){
}


void campo::getMatriz(){
	int linha, coluna;
	for (linha = 0; linha < 40; linha++){
		for (coluna = 0; coluna < 40; coluna++)
			cout << matriz[linha][coluna].getEstado();
		cout << endl;
	}
}

void campo::setMatriz(int linha, int coluna, string estado){
	if(estado == "morte")
		matriz[linha][coluna].setMorrer();
	else
		matriz[linha][coluna].setViver();
}