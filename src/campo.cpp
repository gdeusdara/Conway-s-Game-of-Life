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
	cout << endl << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tteste 1" << endl;
}

void campo::setMatriz(int linha, int coluna, string estado){
	if(estado == "morte")
		matriz[linha][coluna].setMorrer();
	else
		matriz[linha][coluna].setViver();
}

void campo::setGosperGliderGun(){
	int moverHorizontal = 0;
	int moverVertical = 0;
	char botao;
	
	while(botao != 'p'){
		matriz[27 + moverHorizontal][92 + moverVertical].setViver();
		matriz[28 + moverHorizontal][92 + moverVertical].setViver();
		matriz[27 + moverHorizontal][93 + moverVertical].setViver();
		matriz[28 + moverHorizontal][93 + moverVertical].setViver();
		matriz[27 + moverHorizontal][92 + moverVertical].setViver();
		matriz[27 + moverHorizontal][102 + moverVertical].setViver();
		matriz[28 + moverHorizontal][102 + moverVertical].setViver();
		matriz[29 + moverHorizontal][102 + moverVertical].setViver();
		matriz[30 + moverHorizontal][103 + moverVertical].setViver();
		matriz[26 + moverHorizontal][103 + moverVertical].setViver();
		matriz[31 + moverHorizontal][104 + moverVertical].setViver();
		matriz[31 + moverHorizontal][105 + moverVertical].setViver();
		matriz[25 + moverHorizontal][105 + moverVertical].setViver();
		matriz[28 + moverHorizontal][107 + moverVertical].setViver();
		matriz[25 + moverHorizontal][106 + moverVertical].setViver();
		matriz[26 + moverHorizontal][108 + moverVertical].setViver();
		matriz[30 + moverHorizontal][108 + moverVertical].setViver();
		matriz[27 + moverHorizontal][109 + moverVertical].setViver();
		matriz[28 + moverHorizontal][109 + moverVertical].setViver();
		matriz[29 + moverHorizontal][109 + moverVertical].setViver();
		matriz[28 + moverHorizontal][110 + moverVertical].setViver();
		matriz[27 + moverHorizontal][113 + moverVertical].setViver();
		matriz[26 + moverHorizontal][113 + moverVertical].setViver();
		matriz[25 + moverHorizontal][113 + moverVertical].setViver();
		matriz[27 + moverHorizontal][114 + moverVertical].setViver();
		matriz[26 + moverHorizontal][114 + moverVertical].setViver();
		matriz[25 + moverHorizontal][114 + moverVertical].setViver();
		matriz[24 + moverHorizontal][115 + moverVertical].setViver();
		matriz[28 + moverHorizontal][115 + moverVertical].setViver();
		matriz[28 + moverHorizontal][117 + moverVertical].setViver();
		matriz[24 + moverHorizontal][117 + moverVertical].setViver();
		matriz[23 + moverHorizontal][117 + moverVertical].setViver();
		matriz[29 + moverHorizontal][117 + moverVertical].setViver();
		matriz[26 + moverHorizontal][127 + moverVertical].setViver();
		matriz[25 + moverHorizontal][127 + moverVertical].setViver();
		matriz[26 + moverHorizontal][128 + moverVertical].setViver();
		matriz[25 + moverHorizontal][128 + moverVertical].setViver();

		getMatriz();
		cin >> botao;

		if (botao != 'p'){
			matriz[27 + moverHorizontal][92 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][92 + moverVertical].setMorrer();
			matriz[27 + moverHorizontal][93 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][93 + moverVertical].setMorrer();
			matriz[27 + moverHorizontal][92 + moverVertical].setMorrer();
			matriz[27 + moverHorizontal][102 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][102 + moverVertical].setMorrer();
			matriz[29 + moverHorizontal][102 + moverVertical].setMorrer();
			matriz[30 + moverHorizontal][103 + moverVertical].setMorrer();
			matriz[26 + moverHorizontal][103 + moverVertical].setMorrer();
			matriz[31 + moverHorizontal][104 + moverVertical].setMorrer();
			matriz[31 + moverHorizontal][105 + moverVertical].setMorrer();
			matriz[25 + moverHorizontal][105 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][107 + moverVertical].setMorrer();
			matriz[25 + moverHorizontal][106 + moverVertical].setMorrer();
			matriz[26 + moverHorizontal][108 + moverVertical].setMorrer();
			matriz[30 + moverHorizontal][108 + moverVertical].setMorrer();
			matriz[27 + moverHorizontal][109 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][109 + moverVertical].setMorrer();
			matriz[29 + moverHorizontal][109 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][110 + moverVertical].setMorrer();
			matriz[27 + moverHorizontal][113 + moverVertical].setMorrer();
			matriz[26 + moverHorizontal][113 + moverVertical].setMorrer();
			matriz[25 + moverHorizontal][113 + moverVertical].setMorrer();
			matriz[27 + moverHorizontal][114 + moverVertical].setMorrer();
			matriz[26 + moverHorizontal][114 + moverVertical].setMorrer();
			matriz[25 + moverHorizontal][114 + moverVertical].setMorrer();
			matriz[24 + moverHorizontal][115 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][115 + moverVertical].setMorrer();
			matriz[28 + moverHorizontal][117 + moverVertical].setMorrer();
			matriz[24 + moverHorizontal][117 + moverVertical].setMorrer();
			matriz[23 + moverHorizontal][117 + moverVertical].setMorrer();
			matriz[29 + moverHorizontal][117 + moverVertical].setMorrer();
			matriz[26 + moverHorizontal][127 + moverVertical].setMorrer();
			matriz[25 + moverHorizontal][127 + moverVertical].setMorrer();
			matriz[26 + moverHorizontal][128 + moverVertical].setMorrer();
			matriz[25 + moverHorizontal][128 + moverVertical].setMorrer();

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