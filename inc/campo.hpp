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

	void getMatriz();
	void setMatriz(int linha, int coluna, string estado);
	void setGosperGliderGun();
};



#endif