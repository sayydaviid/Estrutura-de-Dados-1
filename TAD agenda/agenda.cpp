#include "agenda.h"
#include <iostream>
#include <cstring>
using namespace std;
Agenda::Agenda() : numContatos(0) {}

void Agenda::adicionarContato(const Contato& novoContato) {
    if (numContatos < 100) {
        contatos[numContatos] = novoContato;
        numContatos++;
        std::cout << "Contato adicionado com sucesso!" << std::endl;
    } else {
        std::cout << "A agenda está cheia, não é possível adicionar mais contatos." << std::endl;
    }
}

void Agenda::imprimirContatos() {
    for (int i = 0; i < numContatos; ++i) {
        cout << "Nome: " << contatos[i].nome << endl;
        cout << "Endereço: " << contatos[i].endereco << endl;
        cout << "Número: " << contatos[i].numero << endl;
        cout << "-----------------------" << endl;
    }
}

void Agenda::alterarNome(const char* nomeAntigo, const char* novoNome) {
    for (int i = 0; i < numContatos; ++i) {
        if (strcmp(contatos[i].nome, nomeAntigo) == 0) {
            strcpy(contatos[i].nome, novoNome);
            cout << "Nome alterado com sucesso!" << endl;
            return;
        }
    }
    cout << "Contato não encontrado!" << endl;
}

void Agenda::alterarNumero(const char* nome, const char* novoNumero) {
    for (int i = 0; i < numContatos; ++i) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            strcpy(contatos[i].numero, novoNumero);
            cout << "Número de contato alterado com sucesso!" << endl;
            return;
        }
    }
    cout << "Contato não encontrado!" << endl;
}

void Agenda::buscarContato(const char* nome) {
    for (int i = 0; i < numContatos; ++i) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            cout << "Nome: " << contatos[i].nome << endl;
            cout << "Endereço: " << contatos[i].endereco << endl;
            cout << "Número: " << contatos[i].numero << endl;
            return;
        }
    }
    cout << "Contato não encontrado!" << endl;
}

void Agenda::removerContato(const char* nome) {
    for (int i = 0; i < numContatos; ++i) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            for (int j = i; j < numContatos - 1; ++j) {
                contatos[j] = contatos[j + 1];
            }
            numContatos--;
            std::cout << "Contato removido com sucesso!" << std::endl;
            return;
        }
    }
    std::cout << "Contato não encontrado!" << std::endl;
}
