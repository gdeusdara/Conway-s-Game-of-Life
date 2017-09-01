#include <iostream>
#include "celula.hpp"

celula::celula(){
	estado = '-';
}

celula::~celula() {
}

char celula::getEstado(){
	return estado;
}

void celula::setMorrer(){
	estado = '-';
}

void celula::setViver(){
	estado = 'E';
}