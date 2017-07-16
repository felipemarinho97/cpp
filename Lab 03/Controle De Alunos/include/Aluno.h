#ifndef ALUNO_H
#define ALUNO_H
#include <string>

using std::string;

class Aluno {
    public:
        Aluno();
        Aluno(string &, string &, string &);
        virtual ~Aluno();

        string getMatricula();
        string getNome();
        string getCurso();

        string toString();


    protected:

    private:
        string nome;
        string matricula;
        string curso;
};

#endif // ALUNO_H
