/*
 * Cenario.h
 *
 *  Created on: 16 de jul de 2017
 *      Author: darklyn
 */

#ifndef CENARIO_H_
#define CENARIO_H_
#include <vector>
#include <string>
#include "../include/Aposta.h"

class Cenario {
	public:
		enum Status {FINALIZADO, NAO_FINALIZADO};
		Cenario(std::string &);
		virtual ~Cenario();

		int get_valor_total();
		int get_total_apostas();
		void registrar_aposta(Aposta *);
		std::string listar_apostas();
		std::string toString();

		int fechar(bool &);
		int get_caixa();

	private:
		std::string descricao;
		Status estado;
		std::vector<Aposta*> apostas;
		int valor_total_de_apostas;
		int arrecadado;

};

#endif /* CENARIO_H_ */
