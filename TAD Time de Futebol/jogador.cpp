// jogador.cpp
#include "jogador.h"
#include <iostream>

JogadorFutebol::JogadorFutebol() : nome(""), jogos(0), gols(0), assistencias(0) {}

void JogadorFutebol::atribui(std::string nome, int jogos, int gols, int assistencias) {
    this->nome = nome;
    this->jogos = jogos;
    this->gols = gols;
    this->assistencias = assistencias;
}

void JogadorFutebol::imprime() {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Jogos: " << jogos << std::endl;
    std::cout << "Gols: " << gols << std::endl;
    std::cout << "Assistências: " << assistencias << std::endl;
}

bool JogadorFutebol::jogadorBom() {
    return gols > jogos;
}
