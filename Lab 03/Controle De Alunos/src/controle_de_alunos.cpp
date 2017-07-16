#include "controle_de_alunos.h"
#include "grupo_de_estudo.h"
#include <string>
#include <iostream>
#include <limits>
#include <stdexcept>

using namespace std;

controle_de_alunos::controle_de_alunos()
{
    //ctor
}

controle_de_alunos::~controle_de_alunos()
{
    //dtor
}

void inline flushCin() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void controle_de_alunos::cadastrar_aluno() {
    string nome, matricula, curso;
    cout << "Matrícula: ";
    flushCin();
    getline(cin, matricula);
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Curso: ";
    getline(cin, curso);

    if (this->alunos.find(matricula) != this->alunos.end()) {
        cout << "MATRÍCULA JÁ CADASTRADA!" << endl;
    } else {
        this->alunos[matricula] = new Aluno(matricula, nome, curso);
        cout << "CADASTRO REALIZADO!" << endl;
    }
}

void controle_de_alunos::consultar_aluno() {
    string matricula;
    cout << "Matrícula: ";
    cin >> matricula;

    if (this->alunos.find(matricula) != this->alunos.end()) {
        cout << this->alunos.at(matricula)->toString() << endl;
    } else {
        throw runtime_error("Aluno não cadastrado.");
    }
}

void controle_de_alunos::cadastrar_grupo() {
    string nome;
    cout << "Grupo: ";
    flushCin();
    getline(cin, nome);

    if (this->grupos.find(nome) != this->grupos.end()) {
        cout << "GRUPO JÁ CADASTRADO!" << endl;
    } else {
        this->grupos[nome] = new grupo_de_estudo(nome);
        cout << "CADASTRO REALIZADO!" << endl;
    }
}

void controle_de_alunos::alocar_aluno() {
    string grupo, matricula;

    cout << "Matrícula: ";
    flushCin();
    getline(cin, matricula);
    cout << "Grupo: ";
    getline(cin, grupo);

    if (this->alunos.find(matricula) == this->alunos.end()) {
        throw runtime_error("Aluno não cadastrado.");
    } else if (this->grupos.find(grupo) == this->grupos.end()) {
        throw runtime_error("Grupo não cadastrado.");
    } else {
        Aluno *alunoPtr = alunos.at(matricula);
        this->grupos.at(grupo)->alocar(alunoPtr);
        cout << "ALUNO ALOCADO!" << endl;
    }
}

void controle_de_alunos::imprimir_grupo() {
    string grupo;
    flushCin();
    cout << "Grupo: ";
    getline(cin, grupo);

    if (this->grupos.find(grupo) == this->grupos.end()) {
        throw runtime_error("Grupo não cadastrado.");
    } else {
        cout << "\nAlunos do grupo " << grupo << ":" << endl;
        cout << this->grupos.at(grupo)->toString() << endl;
    }
}

void controle_de_alunos::registrar_resposta() {
    string matricula;

    cout << "Matrícula: ";
    flushCin();
    getline(cin, matricula);

    if (this->alunos.find(matricula) == this->alunos.end()) {
        throw runtime_error("Aluno não cadastrado.");
    } else {
        this->responderam_questoes[matricula] = this->alunos.at(matricula);
        cout << "ALUNO REGISTRADO!" << endl;
    }
}

void controle_de_alunos::imprimir_resposta() {
    cout << "Alunos:" << endl;
    int i = 1;
    for (map< std::string, Aluno* >::const_iterator it = this->responderam_questoes.begin(); it != this->responderam_questoes.end(); ++it) {
        cout << i++ << ". " << it->second->toString() << endl;
    }
}
