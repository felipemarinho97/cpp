/*
 * sistema_de_apostas.cpp
 *
 *  Created on: 16 de jul de 2017
 *      Author: darklyn
 */

#include "../include/Sistema_de_apostas.h"

#include <string>
#include <sstream>


using namespace std;

Sistema_de_apostas::Sistema_de_apostas(int &caixa, const double &taxa) {
	this->caixa = caixa;
	this->taxa = taxa;
}

Sistema_de_apostas::~Sistema_de_apostas() {
	// TODO Auto-generated destructor stub
}

int Sistema_de_apostas::getCaixa() {
	return this->caixa;
}

string Sistema_de_apostas::exibir_cenario(int &num) {
	return this->cenarios.at(num)->toString();
}

int Sistema_de_apostas::cadastrar_cenario(string &descricao) {
	this->cenarios.push_back(new Cenario(descricao));
	return this->cenarios.size();
}

string Sistema_de_apostas::exibir_cenarios() {
	stringstream ss;
	for (int i = 0; i < this->cenarios.size(); i++) {
		ss << i << " - " << this->cenarios.at(i)->toString() << endl;
	}
	return ss.str();
}

void Sistema_de_apostas::cadastrar_aposta(int &cenario, std::string &apostador,
											int &valor, bool &previsao) {
	this->cenarios.at(cenario-1)->registrar_aposta(new Aposta(&apostador, &valor, &previsao));
}

int Sistema_de_apostas::valor_total_de_apostas(int &cenario) {
	return this->cenarios.at(cenario-1)->get_valor_total();
}
int Sistema_de_apostas::total_de_apostas(int &cenario) {
	return this->cenarios.at(cenario-1)->get_total_apostas();
}
std::string Sistema_de_apostas::exibe_apostas(int &cenario) {
	return this->cenarios.at(cenario-1)->listar_apostas();
}
