#include <iostream>
#include "celula.hpp"
#include "campo.hpp"
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, char ** argv) {
	campo principal, complementar;
	int linha;
	int coluna;
	int contagem;
	int tempo = 0;

	principal.setGosperGliderGun();

	 while(tempo < 500){

		principal.getMatriz();
		usleep(150000);

		for (linha = 0; linha < 57; linha++)
			for (coluna = 0; coluna < 220; coluna++){
				contagem = 0;
				if (linha - 1 >= 0){
					if (principal.getEstado(linha - 1, coluna) == 'E')
						contagem++;
					if (coluna - 1 >= 0)
						if (principal.getEstado(linha - 1, coluna - 1) == 'E')
							contagem++;
					if (coluna + 1 < 220)
						if (principal.getEstado(linha - 1, coluna + 1) == 'E')
							contagem++;
				}
				if (coluna - 1 >= 0)
					if(principal.getEstado(linha, coluna - 1) == 'E')
						contagem++;
				if (coluna + 1 < 220)
					if(principal.getEstado(linha, coluna + 1) == 'E')
						contagem++;
				if(linha + 1 < 57){
					if(principal.getEstado(linha + 1, coluna) == 'E')
						contagem++;
					if(coluna - 1 >= 0)
						if(principal.getEstado(linha + 1, coluna - 1) == 'E')
							contagem++;
					if(coluna + 1 < 220)
						if(principal.getEstado(linha +1, coluna + 1) == 'E')
							contagem++;
				}
				
				if(principal.getEstado(linha, coluna) == '-'){
					if(contagem == 3){
						complementar.setViver(linha, coluna);
					}
				}else{
					if(contagem < 2 or contagem > 3){
						complementar.setMorrer(linha, coluna);
					}else{
						complementar.setViver(linha,coluna);
					}
				}
				
			}

		principal = complementar;
		tempo++;
		
	}

	return 0;
}