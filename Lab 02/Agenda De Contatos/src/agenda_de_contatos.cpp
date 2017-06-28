#include "agenda_de_contatos.h"
#include <string.h>

agenda_de_contatos::agenda_de_contatos()
{
    //ctor
}

agenda_de_contatos::~agenda_de_contatos()
{
    //dtor
}

bool agenda_de_contatos::cadastar_contato(std::string &nome, std::string &sobrenome, std::string &telefone, int &posicao) {
    if (array_de_contatos[&posicao] == nullptr) {
        return false;
    }

    Contato contato;
    contato.set_nome(&nome);
    contato.set_sobrenome(&sobrenome);
    contato.set_telefone(&telefone);

    array_de_contatos[&posicao] = contato;

    return true;
};

std::string agenda_de_contatos::listar_contatos() {
    for (int i = 0; i < 100; i++) {
        cout << array_de_contatos[i].toString() << endl;
    }
};

std::string agenda_de_contatos::exibir_contato(int index) {
    return this->array_de_contatos[index].toString();
}
