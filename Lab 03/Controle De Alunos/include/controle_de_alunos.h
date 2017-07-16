#ifndef CONTROLE_DE_ALUNOS_H
#define CONTROLE_DE_ALUNOS_H
#include <unordered_map>
#include <map>
#include "Aluno.h"
#include "grupo_de_estudo.h"


class controle_de_alunos
{
    public:
        controle_de_alunos();
        virtual ~controle_de_alunos();
        void cadastrar_aluno();
        void consultar_aluno();
        void cadastrar_grupo();
        void alocar_aluno();
        void imprimir_grupo();
        void registrar_resposta();
        void imprimir_resposta();

    private:
        std::unordered_map< std::string, Aluno* > alunos;
        std::map< std::string, Aluno* > responderam_questoes;
        std::unordered_map< std::string, grupo_de_estudo* > grupos;
};

#endif // CONTROLE_DE_ALUNOS_H
