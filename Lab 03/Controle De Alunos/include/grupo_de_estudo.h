#ifndef GRUPO_DE_ESTUDO_H
#define GRUPO_DE_ESTUDO_H
#include <string>
#include <unordered_map>
#include "Aluno.h"

class grupo_de_estudo
{
    public:
        grupo_de_estudo(std::string &);
        virtual ~grupo_de_estudo();
        void alocar(Aluno *);
        std::string toString();

    protected:

    private:
        std::string tema;
        std::unordered_map< std::string, Aluno * > alunos_alocados;
};

#endif // GRUPO_DE_ESTUDO_H
