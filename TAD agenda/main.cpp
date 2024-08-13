#include "agenda.h"
#include <iostream>
using namespace std;
int main() {
    Agenda minhaAgenda;

    char opcao;
    do {
        cout << "Selecione a opção:\n";
        cout << "1. Adicionar contato\n";
        cout << "2. Remover contato\n";
        cout << "3. Imprimir contatos\n";
        cout << "4. Sair\n";
        cout << "Opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case '1': {
                Contato novoContato;
                cout << "Digite o nome do contato: ";
                cin.getline(novoContato.nome, sizeof(novoContato.nome));
                cout << "Digite o endereço do contato: ";
                cin.getline(novoContato.endereco, sizeof(novoContato.endereco));
                cout << "Digite o número do contato: ";
                cin.getline(novoContato.numero, sizeof(novoContato.numero));
                minhaAgenda.adicionarContato(novoContato);
                break;
            }
            case '2': {
                char nomeRemover[50];
                cout << "Digite o nome do contato a ser removido: ";
                cin.getline(nomeRemover, sizeof(nomeRemover));
                minhaAgenda.removerContato(nomeRemover);
                break;
            }
            case '3':
                cout << "Todos os contatos na agenda:" << endl;
                minhaAgenda.imprimirContatos();
                break;
            case '4':
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida! Por favor, selecione uma opção válida." << endl;
        }
    } while (opcao != '4');

    return 0;
}
