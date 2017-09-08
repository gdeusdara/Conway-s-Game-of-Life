#ifndef CAMPO_HPP
#define CAMPO_HPP

#include <iostream>
#include <string>
#include "celula.hpp"

using namespace std;

class campo: public celula{
private:

	celula matriz[57][220];

public:
	campo();
	~campo();

	char getEstado(int linha, int coluna);
	void setViver(int linha, int coluna);
	void setMorrer(int linha, int coluna);
	void setEstadoVivo(char vivo);
	void setEstadoMorto(char morto);
	void getMatriz();
	void setGosperGliderGun();
};



#endif