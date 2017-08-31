#ifndef CELULA_HPP
#define CELULA_HPP

#include <string>

class celula {
private:
	char estado;

public:
	celula();
	~celula();
	char getEstado();
	void setMorrer();
	void setViver();
};


#endif