#include <iostream>
#include <vector>
#include "forma.hpp"

using namespace std;

forma::forma(){
}
forma::~forma(){
}

int forma::getQuantidadeCoordenadas(){
	return coordenadas_x.size();
}
int forma::getCoordenada_x(int posicao){
	return coordenadas_x[posicao];
}

int forma::getCoordenada_y(int posicao){
	return coordenadas_y[posicao];
}

void forma::acrescentaCoordenadas(int coordenada_x, int coordenada_y){
	coordenadas_x.push_back(coordenada_x);
	coordenadas_y.push_back(coordenada_y);
}