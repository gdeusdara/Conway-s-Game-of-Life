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

char menuPrincipal();
char menuDeOrganismos(campo * jogo);
char menuDeOpcoes(int qtdGeracoes, campo * jogo);
campo * MudaVivoMorto();
int MudaQtdGeracoes();
int EscolheVelocidade();

int main(int argc, char ** argv) {
	campo * jogo = new campo();
	int geracao;
	int qtdGeracoes = 500;
	int velocidade = 100000;
	char opcao, escolha;


	do{
		system("clear");
		escolha = menuPrincipal();
		
		switch (escolha) {
		case '1':
			escolha = menuDeOrganismos(jogo);
			if(escolha != '6'){
				geracao = 1;

				while(geracao < qtdGeracoes){
				 	system("clear");

					jogo->getMatriz();
					usleep(velocidade);

					jogo = jogo->regrasDoJogo();
					geracao++;

				}
				cout << "Aperte 3 para FINALIZAR O JOGO ou QUALQUER TECLA para voltar ao MENU PRINCIPAL: ";
				cin >> escolha;
				if(escolha != 3);
			}
			jogo = new campo(jogo->getVivo(), jogo->getMorto());
			break;
		case '2':
			opcao = menuDeOpcoes(qtdGeracoes, jogo);
			switch (opcao){
				case '1':
					jogo = MudaVivoMorto();
					break;
				case '2':
					qtdGeracoes = MudaQtdGeracoes();
					break;
				case '3':
					velocidade = EscolheVelocidade();
			}

		}


	}while(escolha != '3');

	delete(jogo);
	return 0;
}


//FUNCÕES


char menuPrincipal(){
	char opcao;

	do{
		cout << "\t\t\t\tJOGO DA VIDA" << endl << endl << endl;
		cout << "\t\t1. ENTRAR NO JOGO" << endl;
		cout << "\t\t2. OPÇÕES" << endl;
		cout << "\t\t3. SAIR" << endl;
		cout << endl << "\t\tDigite a opção desejada (1/2/3): ";
		cin >> opcao;
		system("clear");
	}while(opcao != '1' and opcao != '2' and opcao != '3');

	system("clear");
	return opcao;
}



char menuDeOrganismos(campo * jogo){
	char opcao;

	GosperGliderGun forma1;
	glider forma2;
	block forma3;
	blinker forma4;
	toad forma5;

	do{
		do{
			cout << "\tEscolha um ORGANISMO para seu jogo:" << endl << endl;
			cout << "1. Gosper Glider Gun" << endl;
			cout << "2. Glider" << endl;
			cout << "3. Block"  << endl;
			cout << "4. Blinker" << endl;
			cout << "5. Toad" << endl;
			cout << "6. Voltar para o MENU PRINCIPAL";
			cout << endl << "\t\tDigite (1/2/3/4/5/6): ";


			cin >> opcao;
		}while(opcao != '1' and opcao != '2' and opcao != '3' and opcao != '4' and opcao != '5' and opcao != '6');
		if (opcao != '6'){
			switch (opcao) {
		 		case '1':
		    		jogo->acrescentaForma(forma1);
		    		break;
		  		case '2':
		    		jogo->acrescentaForma(forma2);
		    		break;
		    	case '3':
		    		jogo->acrescentaForma(forma3);
		    		break;
		    	case '4':
		    		jogo->acrescentaForma(forma4);
		    		break;
		   		case '5':
			   		jogo->acrescentaForma(forma5);
		 	}

		 	do{
				cout << "\t\t\tDeseja acrescentar mais organismos? Digite S para SIM e I para INICIAR (6 para voltar ao MENU PRINCIPAL)" << endl;
		 		cin >> opcao;
		 		opcao = toupper(opcao);
		 	}while(opcao != 'S' and opcao != 'I' and opcao != '6');
		}
		system("clear"); 

	}while (opcao != 'I' and opcao != '6');

	return opcao;

}


char menuDeOpcoes(int qtdGeracoes, campo * jogo){
	char escolha;

	do{
		cout << "1. Mudar estado de VIVO e MORTO -> atualmente:   VIVO: " << jogo->getVivo() << "    MORTO: " << jogo->getMorto() << endl;
		cout << "2. Mudar a Quantidade de GERAÇÕES -> atualmente: " << qtdGeracoes << " gerações" << endl;
		cout << "3. Mudar VELOCIDADE do jogo" << endl;
		cout << "4. Voltar ao MENU PRINCIPAL" << endl;
		cout << endl << "Digite (1/2/3): ";

		cin >> escolha;
		system("clear");
	}while(escolha != '1' and escolha != '2' and escolha != '3' and escolha != '4');

	return escolha;
}


campo * MudaVivoMorto(){
	char vivo, morto;
	cout << "Digite um caracter para representar a CÉLULA VIVA: ";
	cin >> vivo;
	cout << "Digite um caracter para representar a CÉLULA MORTA: ";
	cin >> morto;
	campo * jogo = new campo(vivo, morto);

	return jogo;
}



int MudaQtdGeracoes(){
	int geracoes;
	do{
		cout << "Digite a Quantidade de GERAÇÕES desejadas (impossivel quantidade negativa): ";

		try{
			cin >> geracoes;
			if (cin.fail()) {
    			cout <<" NÃO É UM NÚMERO!";
    			throw(10);

			}
		}

		catch(int e){
			cout << "ERRO DE ENTRADA";
		}

		system("clear");

	
	}while(geracoes < 1);

	
	return geracoes;

}


int EscolheVelocidade(){
	char escolha;
	int velocidade;
	do{
		cout << "\tVELOCIDADE DO JOGO" << endl;
		cout << "1. Rapida" << endl;
		cout << "2. Normal" << endl;
		cout << "3. Devagar" << endl;
		cout << "4. Muito Devagar" << endl;
		cout << endl << "Digite a velocidade desejada (1/2/3/4): ";

		cin >> escolha;

	}while(escolha != '1' and escolha != '2' and escolha != '3' and escolha != '4');

	switch(escolha){
		case '1':
			velocidade = 70000;
			break;
		case '2':
			velocidade = 100000;
			break;
		case '3':
			velocidade = 700000;
			break;
		case '4':
			velocidade = 200000;
	}

	return velocidade;

}
