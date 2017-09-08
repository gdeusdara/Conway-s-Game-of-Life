#ifndef CELULA_HPP
#define CELULA_HPP

#include <string>

class celula {
private:
	char vivo;
	char morto;
	char estado;

public:
	celula();
	~celula();
	char getEstado();
	char getEstadoVivo();
	void setEstadoVivo(char vivo);
	char getEstadoMorto();
	void setEstadoMorto(char morto);
	void setMorrer();
	void setViver();
};


#endif