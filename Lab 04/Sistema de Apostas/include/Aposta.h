/*
 * Aposta.h
 *
 *  Created on: 16 de jul de 2017
 *      Author: darklyn
 */

#ifndef APOSTA_H_
#define APOSTA_H_
#include <string>

class Aposta {
	public:
		Aposta(std::string &, int &, bool &);
		virtual ~Aposta();

		std::string getApostador();
		int getQuantia();
		bool getPrevisao();
		std::string to_string();

	private:
		std::string apostador;
		int quantia;
		bool previsao;



};

#endif /* APOSTA_H_ */
