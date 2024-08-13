// time.h
#ifndef TIME_HPP
#define TIME_HPP

#include <string>
#include "jogador.h"

class TimeFutebol {
private:
    std::string nome;
    std::string treinador;
    int vitorias;
    int empates;
    int derrotas;
    JogadorFutebol jogadores[5];

public:
    TimeFutebol();

    void atribui(std::string nome, std::string treinador, int vitorias, int empates, int derrotas, JogadorFutebol jogadores[]);

    void imprime();

    int pontuacao();
};

#endif
