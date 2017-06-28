#include <string.h>
#include <Contato.h>
#ifndef AGENDA_DE_CONTATOS_H
#define AGENDA_DE_CONTATOS_H


class agenda_de_contatos
{
    public:
        agenda_de_contatos();
        virtual ~agenda_de_contatos();

        bool cadastar_contato(std::string &nome, std::string &sobrenome, std::string &telefone, int &posicao);
        std::string listar_contatos();
        std::string exibir_contato(int index);

    private:
        Contato array_de_contatos[100];
        int i;
};

#endif // AGENDA_DE_CONTATOS_H
