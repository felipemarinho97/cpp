#include "Contato.h"
#include <string>
#include <string.h>

using namespace std;

Contato::Contato()
{
    //ctor
}

Contato::~Contato()
{
    //dtor
}


void Contato::set_nome(string &nome) {
    this->nome = nome;
};

void Contato::set_sobrenome(string &sobrenome){
    this->sobrenome = sobrenome;
};

void Contato::set_telefone(string &telefone){
    this->telefone = telefone;
};

string Contato::get_nome() {
    return this->nome;
};

string Contato::get_sobrenome(string &sobrenome){
    return this->sobrenome;
};

string Contato::get_telefone(std::string &telefone){
    telefone = this->telefone;
};

string Contato::toString() {
    string toString = this->nome + " - " + this->telefone;
    return toString;
};
