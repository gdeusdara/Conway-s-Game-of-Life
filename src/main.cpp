#include <iostream>
#include <string>
#include <unistd.h>

#include "celula.hpp"
#include "campo.hpp"

#include "forma.hpp"
#include "GosperGliderGun.hpp"
#include "glider.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "toad.hpp"


using namespace std;

int main(int argc, char ** argv) {
	campo principal, complementar;
	int tempo = 0;
	GosperGliderGun forma1;
	glider forma2;
	block forma3;
	blinker forma4;
	toad forma5;
	

	principal.acrescentaForma(forma1);
	cout << "faça De novo" << endl;
	principal.acrescentaForma(forma2);
	cout << "faça De novo" << endl;
	principal.acrescentaForma(forma3);
	cout << "faça De novo" << endl;
	principal.acrescentaForma(forma4);
	cout << "faça De novo" << endl;
	principal.acrescentaForma(forma5);
	

	 while(tempo < 500){

		principal.getMatriz();
		usleep(100000);

		principal = principal.regrasDoJogo();
		tempo++;
		
	}

	return 0;
}