#include "Aluno.h"
#include <string>
#include <iostream>

using namespace std;

Aluno::Aluno() {}

Aluno::Aluno(string &matriculaPtr, string &nomePtr, string &cursoPtr) {
    this->matricula = matriculaPtr;
    this->nome = nomePtr;
    this->curso = cursoPtr;
}

Aluno::~Aluno()
{
    //dtor
}

string Aluno::getMatricula() {
    return this->matricula;
};
string Aluno::getNome() {
    return this->nome;
};
string Aluno::getCurso() {
    return this->curso;
};

string Aluno::toString() {
    return this->getMatricula() + " - " + this->getNome() + " - " + this->getCurso();
}
