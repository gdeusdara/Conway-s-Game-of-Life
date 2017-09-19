#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <locale>

#include "campo.hpp"

#include "forma.hpp"
#include "GosperGliderGun.hpp"
#include "glider.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "toad.hpp"


using namespace std;

int main(int argc, char ** argv) {
	system("clear");

	campo principal;
	int tempo = 0;
	char opcao;

	GosperGliderGun forma1;
	glider forma2;
	block forma3;
	blinker forma4;
	toad forma5;

	do{
		cout << "\t\t\t\tJOGO DA VIDA" << endl << endl << endl;
		cout << "\t\t1. ENTRAR NO JOGO" << endl;
		cout << "\t\t2. OPÇÕES" << endl;

		cin >> opcao;
	}while(opcao != '1' and opcao != '2');

	system("clear");
	
	if(opcao == '1'){
		do{
			do{
				cout << "\tEscolha um organismo para seu jogo:" << endl;
				cout << "1. Gosper Glider Gun" << endl;
				cout << "2. Glider" << endl;
				cout << "3. Block"  << endl;
				cout << "4. Blinker" << endl;
				cout << "5. Toad" << endl;

				cin >> opcao;
			}while(opcao != '1' and opcao != '2' and opcao != '3' and opcao != '4' and opcao != '5');
			switch (opcao) {
		 	case '1':
		    	principal.acrescentaForma(forma1);
		    	break;
		  	case '2':
		    	principal.acrescentaForma(forma2);
		    	break;
		    case '3':
		    	principal.acrescentaForma(forma3);
		    	break;
		    case '4':
		    	principal.acrescentaForma(forma4);
		    	break;
		  	case '5':
		    	principal.acrescentaForma(forma5);
		 	}
		 	system("clear");

		 	do{
		 		cout << "\t\t\tDeseja acrescentar mais organismos? Digite S para SIM e N para NÃO" << endl;
		 		cin >> opcao;
		 		opcao = toupper(opcao);
		 	}while(opcao != 's' and opcao != 'S' and opcao != 'n' and opcao != 'N');

		 	system("clear");

		}while (opcao != 'n' and opcao != 'N');

	}
	

	 while(tempo < 500){
	 	system("clear");

		principal.getMatriz();
		usleep(100000);

		principal = principal.regrasDoJogo();
		tempo++;

		
	}

	return 0;
}


