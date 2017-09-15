#ifndef FORMA_HPP
#define FORMA_HPP

#include <iostream>
#include <vector>

using namespace std;

class forma {
private:
	vector<int> coordenadas_x;
	vector<int> coordenadas_y;

public:
	forma();
	~forma();

	int getQuantidadeCoordenadas();
	int getCoordenada_x(int posicao);
	int getCoordenada_y(int posicao);
	void acrescentaCoordenadas(int coordenada_x, int coordenada_y);

};


#endif