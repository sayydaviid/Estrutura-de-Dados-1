// time.cpp
#include "time.h"
#include <iostream>

TimeFutebol::TimeFutebol() : nome(""), treinador(""), vitorias(0), empates(0), derrotas(0) {}

void TimeFutebol::atribui(std::string nome, std::string treinador, int vitorias, int empates, int derrotas, JogadorFutebol jogadores[]) {
    this->nome = nome;
    this->treinador = treinador;
    this->vitorias = vitorias;
    this->empates = empates;
    this->derrotas = derrotas;

    for (int i = 0; i < 5; i++) {
        this->jogadores[i] = jogadores[i];
    }
}

void TimeFutebol::imprime() {
    std::cout << "Nome do Time: " << nome << std::endl;
    std::cout << "Treinador: " << treinador << std::endl;
    std::cout << "Vitórias: " << vitorias << std::endl;
    std::cout << "Empates: " << empates << std::endl;
    std::cout << "Derrotas: " << derrotas << std::endl;
}

int TimeFutebol::pontuacao() {
    return (vitorias * 3) + empates;
}
