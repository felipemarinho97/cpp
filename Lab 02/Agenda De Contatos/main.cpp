#include <iostream>
#include <string.h>
#include "Contato.h"
#include "agenda_de_contatos.h"

using namespace std;

char menu() {
    char op;
    cout << "\n(C)adastrar Contato\n(L)istar Contatos\n(E)xibir Contato\n(S)air\n\nOpção> ";
    cin >> op;
    return op;
}

int main() {
    agenda_de_contatos Agenda;
    char op;
    op = 'a';
    while (op != 'S') {
        op = menu();
        switch (op) {
            case 'C': {
                string nome, sobrenome, telefone;
                int pos;
                cout << "Posição: ";
                cin >> pos;
                cout << "Nome: ";
                cin >> nome;
                cout << "Sobrenome: ";
                cin >> sobrenome;
                cout << "Telefone: ";
                cin >> telefone;
                Agenda.cadastar_contato(nome, sobrenome, telefone, pos);
                cout << "CADASTRO REALIZADO!" << endl;
                break;
                }
            case 'L':
                Agenda.listar_contatos();
                break;
            case 'E': {
                int pos;
                cout << "Contato> ";
                cin >> pos;
                if (pos > 100 || pos < 0) {
                    cout << "POSIÇÃO INVÁLIDA!";
                    break;
                }
                cout << Agenda.exibir_contato(pos) << endl;
                break;
                }
            case 'S':
                break;
            default:
                cout << "OPÇÃO INVÁLIDA" << endl;
                break;
        };
    }

    return 0;
}
