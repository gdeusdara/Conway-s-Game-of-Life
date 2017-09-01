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
	cout <<	"\t\t\t\t\t\t\t\t\t\t\t\t\t\tJOGO DA VIDA" << endl << endl;

	int linha, coluna;
	for (linha = 0; linha < 57; linha++){
		cout << "	";
		for (coluna = 0; coluna < 220; coluna++)
			cout << matriz[linha][coluna].getEstado();
		cout << endl;
	}
	cout << endl << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t teste 1" << endl;
}

void campo::setMatriz(int linha, int coluna, string estado){
	if(estado == "morte")
		matriz[linha][coluna].setMorrer();
	else
		matriz[linha][coluna].setViver();
}