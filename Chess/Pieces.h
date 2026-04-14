#ifndef PIECES_H
#define PIECES_H

#include <SFML/Graphics.hpp>

enum class PieceType {
    None,
    Pawn,
    Knight,
    Bishop,
    Rook,
    Queen,
    King
};

enum class PieceColor {
    White,
    Black
};

class Pieces {
protected:
    PieceType type;
    PieceColor color;

    sf::Sprite sprite;

public:
    Pieces();
    virtual ~Pieces() = default;

    void setTexture(sf::Texture& texture);
    void setPosition(float x, float y);
    void setScale(float x, float y);

    virtual PieceType getType();
    PieceColor getColor();

    void draw(sf::RenderWindow& window);
};

#endif