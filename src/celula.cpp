#include <iostream>
#include "celula.hpp"

celula::celula(){
	vivo = 'E';
	morto = '-';
	estado = morto;
}

celula::~celula() {
}

char celula::getEstado(){
	return estado;
}

char celula::getEstadoVivo(){
	return vivo;
}

void celula::setEstadoVivo(char vivo){
	this->vivo = vivo;
}

char celula::getEstadoMorto(){
	return morto;
}

void celula::setEstadoMorto(char morto){
	this->morto = morto;
	estado = morto;
}

void celula::setMorrer(){
	estado = morto;
}

void celula::setViver(){
	estado = vivo;
}