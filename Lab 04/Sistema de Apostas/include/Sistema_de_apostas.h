/*
 * sistema_de_apostas.h
 *
 *  Created on: 16 de jul de 2017
 *      Author: darklyn
 */

#ifndef SISTEMA_DE_APOSTAS_H_
#define SISTEMA_DE_APOSTAS_H_
#include <vector>

class Sistema_de_apostas {
	public:
		Sistema_de_apostas(int &, const double &);
		virtual ~Sistema_de_apostas();
		int getCaixa();
		// Cenarios
		int cadastrar_cenario(std::string &);
		std::string exibir_cenario(int &);
		std::string exibir_cenarios();

		// Apostas
		void cadastrar_aposta(int &, std::string &, int &, bool &);
		int valor_total_de_apostas(int &);
		int total_de_apostas(int &);
		std::string exibe_apostas(int &);

		void fechar_cenario(int &, bool&);
		int get_caixa_cenario(int &);
		int get_total_rateio_cenario(int &);


	private:
		const double taxa;
		int caixa;
		std::vector<Cenario*> cenarios;

};

#endif /* SISTEMA_DE_APOSTAS_H_ */
