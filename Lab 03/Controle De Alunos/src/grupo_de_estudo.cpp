#include "grupo_de_estudo.h"
#include <sstream>

typedef std::unordered_map< std::string, Aluno * > mapSA;

grupo_de_estudo::grupo_de_estudo(std::string &tema)
{
    this->tema = tema;
}

grupo_de_estudo::~grupo_de_estudo()
{
    //dtor
}

void grupo_de_estudo::alocar(Aluno *alunoPtr) {
    this->alunos_alocados[alunoPtr->getMatricula()] = alunoPtr;
}

std::string grupo_de_estudo::toString() {
    std::stringstream ss;
    for (mapSA::const_iterator it = this->alunos_alocados.begin(); it != this->alunos_alocados.end(); ++it) {
        ss << it->second->toString() << std::endl;
    }
    return ss.str();
}
