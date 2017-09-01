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
		matriz[27 + moverVertical][92 + moverHorizontal].setViver();
		matriz[28 + moverVertical][92 + moverHorizontal].setViver();
		matriz[27 + moverVertical][93 + moverHorizontal].setViver();
		matriz[28 + moverVertical][93 + moverHorizontal].setViver();
		matriz[27 + moverVertical][92 + moverHorizontal].setViver();
		matriz[27 + moverVertical][102 + moverHorizontal].setViver();
		matriz[28 + moverVertical][102 + moverHorizontal].setViver();
		matriz[29 + moverVertical][102 + moverHorizontal].setViver();
		matriz[30 + moverVertical][103 + moverHorizontal].setViver();
		matriz[26 + moverVertical][103 + moverHorizontal].setViver();
		matriz[31 + moverVertical][104 + moverHorizontal].setViver();
		matriz[31 + moverVertical][105 + moverHorizontal].setViver();
		matriz[25 + moverVertical][105 + moverHorizontal].setViver();
		matriz[28 + moverVertical][107 + moverHorizontal].setViver();
		matriz[25 + moverVertical][106 + moverHorizontal].setViver();
		matriz[26 + moverVertical][108 + moverHorizontal].setViver();
		matriz[30 + moverVertical][108 + moverHorizontal].setViver();
		matriz[27 + moverVertical][109 + moverHorizontal].setViver();
		matriz[28 + moverVertical][109 + moverHorizontal].setViver();
		matriz[29 + moverVertical][109 + moverHorizontal].setViver();
		matriz[28 + moverVertical][110 + moverHorizontal].setViver();
		matriz[27 + moverVertical][113 + moverHorizontal].setViver();
		matriz[26 + moverVertical][113 + moverHorizontal].setViver();
		matriz[25 + moverVertical][113 + moverHorizontal].setViver();
		matriz[27 + moverVertical][114 + moverHorizontal].setViver();
		matriz[26 + moverVertical][114 + moverHorizontal].setViver();
		matriz[25 + moverVertical][114 + moverHorizontal].setViver();
		matriz[24 + moverVertical][115 + moverHorizontal].setViver();
		matriz[28 + moverVertical][115 + moverHorizontal].setViver();
		matriz[28 + moverVertical][117 + moverHorizontal].setViver();
		matriz[24 + moverVertical][117 + moverHorizontal].setViver();
		matriz[23 + moverVertical][117 + moverHorizontal].setViver();
		matriz[29 + moverVertical][117 + moverHorizontal].setViver();
		matriz[26 + moverVertical][127 + moverHorizontal].setViver();
		matriz[25 + moverVertical][127 + moverHorizontal].setViver();
		matriz[26 + moverVertical][128 + moverHorizontal].setViver();
		matriz[25 + moverVertical][128 + moverHorizontal].setViver();

		getMatriz();
		cin >> botao;

		if (botao != 'p'){
			matriz[27 + moverVertical][92 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][92 + moverHorizontal].setMorrer();
			matriz[27 + moverVertical][93 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][93 + moverHorizontal].setMorrer();
			matriz[27 + moverVertical][92 + moverHorizontal].setMorrer();
			matriz[27 + moverVertical][102 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][102 + moverHorizontal].setMorrer();
			matriz[29 + moverVertical][102 + moverHorizontal].setMorrer();
			matriz[30 + moverVertical][103 + moverHorizontal].setMorrer();
			matriz[26 + moverVertical][103 + moverHorizontal].setMorrer();
			matriz[31 + moverVertical][104 + moverHorizontal].setMorrer();
			matriz[31 + moverVertical][105 + moverHorizontal].setMorrer();
			matriz[25 + moverVertical][105 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][107 + moverHorizontal].setMorrer();
			matriz[25 + moverVertical][106 + moverHorizontal].setMorrer();
			matriz[26 + moverVertical][108 + moverHorizontal].setMorrer();
			matriz[30 + moverVertical][108 + moverHorizontal].setMorrer();
			matriz[27 + moverVertical][109 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][109 + moverHorizontal].setMorrer();
			matriz[29 + moverVertical][109 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][110 + moverHorizontal].setMorrer();
			matriz[27 + moverVertical][113 + moverHorizontal].setMorrer();
			matriz[26 + moverVertical][113 + moverHorizontal].setMorrer();
			matriz[25 + moverVertical][113 + moverHorizontal].setMorrer();
			matriz[27 + moverVertical][114 + moverHorizontal].setMorrer();
			matriz[26 + moverVertical][114 + moverHorizontal].setMorrer();
			matriz[25 + moverVertical][114 + moverHorizontal].setMorrer();
			matriz[24 + moverVertical][115 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][115 + moverHorizontal].setMorrer();
			matriz[28 + moverVertical][117 + moverHorizontal].setMorrer();
			matriz[24 + moverVertical][117 + moverHorizontal].setMorrer();
			matriz[23 + moverVertical][117 + moverHorizontal].setMorrer();
			matriz[29 + moverVertical][117 + moverHorizontal].setMorrer();
			matriz[26 + moverVertical][127 + moverHorizontal].setMorrer();
			matriz[25 + moverVertical][127 + moverHorizontal].setMorrer();
			matriz[26 + moverVertical][128 + moverHorizontal].setMorrer();
			matriz[25 + moverVertical][128 + moverHorizontal].setMorrer();

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