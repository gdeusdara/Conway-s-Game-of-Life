#include <iostream>
#include "celula.hpp"
#include "campo.hpp"
#include <string>

using namespace std;

int main(int argc, char ** argv) {
	campo x;

	x.setMatriz(27, 150, "viver");
	x.setMatriz(27, 75, "viver");
	x.getMatriz();


	return 0;
}