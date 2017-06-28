#ifndef CONTATO_H
#define CONTATO_H

#include <string>

class Contato
{
    public:
        Contato();
        virtual ~Contato();

        void set_telefone(std::string &telefone);
        void set_nome(std::string &nome);
        void set_sobrenome(std::string &sobrenome);

        std::string get_nome(std::string &nome);
        std::string get_sobrenome(std::string &sobrenome);
        std::string get_telefone(std::string &telefone);

        std::string toString();

    private:
        std::string nome;
        std::string sobrenome;
        std::string telefone;

};

#endif // CONTATO_H
