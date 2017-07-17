/*
 * Aposta.cpp
 *
 *  Created on: 16 de jul de 2017
 *      Author: darklyn
 */

#include "../include/Aposta.h"

#include <sstream>
#include <string>

using namespace std;

Aposta::Aposta(std::string &nome, int &qtd, bool &aposta) {
	this->apostador = nome;
	this->quantia = qtd;
	this->previsao = aposta;
}

Aposta::~Aposta() {

}

std::string Aposta::getApostador() {
	return this->apostador;
}

int Aposta::getQuantia() {
	return this->quantia;
}
bool Aposta::getPrevisao() {
	return this->previsao;
}

string Aposta::to_string() {
	stringstream ss;
	ss << this->getApostador() << " - R$" << this->getQuantia() << " - " << this->getPrevisao() ? "VAI ACONTECER" : "N VAI ACONTECER" ;
	return ss.str();
}
