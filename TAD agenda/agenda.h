#ifndef AGENDA_H
#define AGENDA_H


struct Contato {
    char nome[50];
    char endereco[100];
    char numero[20];
};

class Agenda {
private:
    Contato contatos[100];
    int numContatos;

public:
    Agenda();
    void adicionarContato(const Contato& novoContato);
    void imprimirContatos();
    void alterarNome(const char* nomeAntigo, const char* novoNome);
    void alterarNumero(const char* nome, const char* novoNumero);
    void buscarContato(const char* nome);
    void removerContato(const char* nome);
};

#endif
