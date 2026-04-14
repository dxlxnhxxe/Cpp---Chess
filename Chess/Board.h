#ifndef BOARD_H
#define BOARD_H

#include <SFML/Graphics.hpp>
#include "Pieces.h"

class Board {
private:
    static const int SIZE = 8;
    static const int TILE_SIZE = 64;

    Pieces* board[SIZE][SIZE];

    sf::Texture whitePawnTexture;
    sf::Texture blackPawnTexture;
    sf::Texture whiteBishopTexture;
    sf::Texture blackBishopTexture;
    sf::Texture whiteKnightTexture;
    sf::Texture blackKnightTexture;
    sf::Texture whiteRookTexture;
    sf::Texture blackRookTexture;
    sf::Texture whiteQueenTexture;
    sf::Texture blackQueenTexture;
    sf::Texture whiteKingTexture;
    sf::Texture blackKingTexture;

public:
    Board();

    void initialise();
    void draw(sf::RenderWindow& window);

    void initialisePawns();
    void initialiseBishops();
    void initialiseKnights();
    void initialiseRooks();
    void initialiseQueens();
    void initialiseKings();
};

#endif