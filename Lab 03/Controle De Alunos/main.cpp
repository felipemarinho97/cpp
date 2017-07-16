#include <iostream>
#include "controle_de_alunos.h"
#include <exception>

using namespace std;

char menu() {
    char op;
    cout << "\n(C)adastrar Aluno\n(E)xibir Aluno\n(N)ovo Grupo\n(A)locar Aluno no Grupo e Imprimir Grupos\n(R)egistrar Resposta de Aluno\n(I)mprimir Alunos que Responderam\n(O)ra, vamos fechar o programa!\n" << endl;
    cout << "Opção> ";
    cin >> op;
    return op;
}

int main()
{
    controle_de_alunos controle;
    char op;
    do {
        op = menu();
        switch (op) {
            case 'C': {
                try {
                    controle.cadastrar_aluno();
                } catch (exception &e) {
                    cout << e.what() << endl;
                }
            }
            break;
            case 'E': {
                try {
                    controle.consultar_aluno();
                } catch (exception &e) {
                    cout << e.what() << endl;
                }
            }
            break;
            case 'N': {
                try {
                    controle.cadastrar_grupo();
                } catch (exception &e) {
                    cout << e.what() << endl;
                }
            }
            break;
            case 'A': {
                cout << "\n(A)locar Aluno ou (I)mprimir Grupo? ";
                char subOp;
                cin >> subOp;
                switch (subOp) {
                    case 'a':
                    case 'A': {
                        try {
                            controle.alocar_aluno();
                        } catch (exception &e) {
                            cout << e.what() << endl;
                        }
                    }
                    break;
                    case 'i':
                    case 'I': {
                        try {
                            controle.imprimir_grupo();
                        } catch (exception &e) {
                            cout << e.what() << endl;
                        }
                    }
                    break;
                }
            }
            break;
            case 'R': {
                try {
                    controle.registrar_resposta();
                } catch (exception &e) {
                    cout << e.what() << endl;
                }
            }
            break;
            case 'I': {
                try {
                    controle.imprimir_resposta();
                } catch (exception &e) {
                    cout << e.what() << endl;
                }
            }
            break;
            case 'O': {
            }
            break;
            default:
            break;
        }
    } while (op != 'O');
    return 0;
}
