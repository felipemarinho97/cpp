#include <iostream>
#include <string.h>
#include "Contato.h"
#include "agenda_de_contatos.h"

using namespace std;

char menu() {
    char op;
    cout << "\n(C)adastrar Contato\n(L)istar Contatos\n(E)xibir Contato\n(S)air\nOpção>\n" << endl;
    cin >> op;
    return op;
}

int main() {
    agenda_de_contatos Agenda;
    char op;
    op = menu();
    while (op != 's') {
        op = menu();
        switch (op) {
            case 'c':
                Agenda.cadastrar_contato("fulanim", "sicar", "6545", 1);
                break;
            case 'l':
                Agenda.listar_contatos();
                break;
            case 'e':
                Agenda.exibir_contato();
                break;
            default:
                cout << "OPÇÃO INVÁLIDA" << endl;
                break;
        };
    }

    return 0;
}
