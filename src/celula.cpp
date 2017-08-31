#include <iostream>
#include "celula.hpp"

using namespace std;

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