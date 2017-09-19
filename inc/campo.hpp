#ifndef CAMPO_HPP
#define CAMPO_HPP

#include <iostream>
#include <string>
#include "forma.hpp"

using namespace std;

class campo{
private:
	char vivo;
	char morto;
	char matriz[56][220];

public:
	campo();
	campo(char vivo, char morto);
	~campo();

	char getEstado(int linha, int coluna);
	void setViver(int linha, int coluna);					
	void setMorrer(int linha, int coluna); 	
	void getMatriz();
	void acrescentaForma(forma organismo);
	campo regrasDoJogo();
};



#endif