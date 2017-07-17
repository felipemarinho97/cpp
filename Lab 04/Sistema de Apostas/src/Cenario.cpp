/*
 * Cenario.cpp
 *
 *  Created on: 16 de jul de 2017
 *      Author: darklyn
 */

#include "../include/Cenario.h"

#include <string>
#include <sstream>
#include "../include/Aposta.h"

using namespace std;

Cenario::Cenario(string &nome) {
	this->descricao = nome;
	this->estado = Cenario::NAO_FINALIZADO;
	this->valor_total_de_apostas = 0;
}

Cenario::~Cenario() {
	// TODO Auto-generated destructor stub
}

void Cenario::registrar_aposta(Aposta *aposta) {
	this->apostas.push_back(aposta);
	this->valor_total_de_apostas += *aposta->getQuantia();
}

string Cenario::listar_apostas() {
	stringstream ss;

	for (int i = 0; i < this->apostas.size(); i++) {
		ss << apostas[i]->to_string() << endl;
	}

	return ss.str();
}

string Cenario::toString() {
	stringstream ss;
	ss << this->descricao << this->estado ? "Finalizado" : "Não-Finalizado";
	return ss.str();
}

int Cenario::get_valor_total() {
	return this->valor_total_de_apostas;
}

int Cenario::get_total_apostas() {
	return this->apostas.size();
}
