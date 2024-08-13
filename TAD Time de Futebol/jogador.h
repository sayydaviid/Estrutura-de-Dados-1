// jogador.h
#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>

class JogadorFutebol {
private:
    std::string nome;
    int jogos;
    int gols;
    int assistencias;

public:
    JogadorFutebol();

    void atribui(std::string nome, int jogos, int gols, int assistencias);

    void imprime();

    bool jogadorBom();
};

#endif
