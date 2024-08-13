#include "time.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    string nomeTimeA, nomeTimeB;

    cout << "Digite o nome do Time A: ";
    cin >> nomeTimeA;

    cout << "Digite o nome do Time B: ";
    cin >> nomeTimeB;
    JogadorFutebol jogadoresTimeA[5];
    for (int i = 0; i < 5; ++i) {
        string nome;
        int jogos, gols, assistencias;
        cout << "Digite o nome do jogador " << i + 1 << " do " << nomeTimeA<< ":";
        cin >> nome;
        cout << "Digite o número de jogos do jogador " << i + 1 << ": ";
        cin >> jogos;
        cout << "Digite o número de gols do jogador " << i + 1 << ": ";
        cin >> gols;
        cout << "Digite o número de assistências do jogador " << i + 1 << ": ";
        cin >> assistencias;
        jogadoresTimeA[i].atribui(nome, jogos, gols, assistencias);
    }
    TimeFutebol timeA;
    string treinadorTimeA;
    int vitoriasTimeA, empatesTimeA, derrotasTimeA;
    cout << "\nDigite o nome do treinador do Time A: ";
    cin >> treinadorTimeA;
    cout << "Digite o número de vitórias do Time A: ";
    cin >> vitoriasTimeA;
    cout << "Digite o número de empates do Time A: ";
    cin >> empatesTimeA;
    cout << "Digite o número de derrotas do Time A: ";
    cin >> derrotasTimeA;
    timeA.atribui(nomeTimeA, treinadorTimeA, vitoriasTimeA, empatesTimeA, derrotasTimeA, jogadoresTimeA);
    JogadorFutebol jogadoresTimeB[5];
    for (int i = 0; i < 5; ++i) {
        string nome;
        int jogos, gols, assistencias;
        cout << "\nDigite o nome do jogador " << i + 1 << " do Time B: ";
        cin >> nome;
        cout << "Digite o número de jogos do jogador " << i + 1 << ": ";
        cin >> jogos;
        cout << "Digite o número de gols do jogador " << i + 1 << ": ";
        cin >> gols;
        cout << "Digite o número de assistências do jogador " << i + 1 << ": ";
        cin >> assistencias;
        jogadoresTimeB[i].atribui(nome, jogos, gols, assistencias);
    }
    // Criação do Time B
    TimeFutebol timeB;
    string treinadorTimeB;
    int vitoriasTimeB, empatesTimeB, derrotasTimeB;
    cout << "\nDigite o nome do treinador do Time B: ";
    cin >> treinadorTimeB;
    cout << "Digite o número de vitórias do Time B: ";
    cin >> vitoriasTimeB;
    cout << "Digite o número de empates do Time B: ";
    cin >> empatesTimeB;
    cout << "Digite o número de derrotas do Time B: ";
    cin >> derrotasTimeB;
    timeB.atribui(nomeTimeB, treinadorTimeB, vitoriasTimeB, empatesTimeB, derrotasTimeB, jogadoresTimeB);
    // Impressão dos dados dos times
    cout << "\nDados do " << nomeTimeA << ":" << endl;
    timeA.imprime();
    cout << "\nPontuação do " << nomeTimeA << ": " << timeA.pontuacao() << " pontos" << endl;
    cout << "\nDados do " << nomeTimeB << ":" << endl;
    timeB.imprime();
    cout << "\nPontuação do " << nomeTimeB << ": " << timeB.pontuacao() << " pontos" << endl;
    return 0;
}