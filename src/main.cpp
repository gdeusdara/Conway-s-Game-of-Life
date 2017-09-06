#include <iostream>
#include "celula.hpp"
#include "campo.hpp"
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, char ** argv) {
	campo x, y;
	int linha;
	int coluna;
	int contagem;
	int tempo = 0;

	x.setGosperGliderGun();

	 while(tempo < 100){

		x.getMatriz();
		usleep(300000);

		for (linha = 0; linha < 57; linha++)
			for (coluna = 0; coluna < 220; coluna++){
				contagem = 0;
				if (linha - 1 >= 0){
					if (x.getEstado(linha - 1, coluna) == 'E')
						contagem++;
					if (coluna - 1 >= 0)
						if (x.getEstado(linha - 1, coluna - 1) == 'E')
							contagem++;
					if (coluna + 1 < 220)
						if (x.getEstado(linha - 1, coluna + 1) == 'E')
							contagem++;
				}
				if (coluna - 1 >= 0)
					if(x.getEstado(linha, coluna - 1) == 'E')
						contagem++;
				if (coluna + 1 < 220)
					if(x.getEstado(linha, coluna + 1) == 'E')
						contagem++;
				if(linha + 1 < 57){
					if(x.getEstado(linha + 1, coluna) == 'E')
						contagem++;
					if(coluna - 1 >= 0)
						if(x.getEstado(linha + 1, coluna - 1) == 'E')
							contagem++;
					if(coluna + 1 < 220)
						if(x.getEstado(linha +1, coluna + 1) == 'E')
							contagem++;
				}
				
				if(x.getEstado(linha, coluna) == '-'){
					if(contagem == 3){
						y.setViver(linha, coluna);
					}
				}else{
					if(contagem < 2 or contagem > 3){
						y.setMorrer(linha, coluna);
					}else{
						y.setViver(linha,coluna);
					}
				}
				
			}

		x = y;
		tempo++;
		
	}

	return 0;
}