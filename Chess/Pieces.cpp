#include "Pieces.h"

Pieces::Pieces() {
    type = PieceType::None;
}

void Pieces::setTexture(sf::Texture& texture) {
    sprite.setTexture(texture);
}

void Pieces::setPosition(float x, float y) {
    sprite.setPosition(x, y);
}

void Pieces::setScale(float x, float y) {
    sprite.setScale(x, y);
}

void Pieces::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

PieceType Pieces::getType() {
    return type;
}

PieceColor Pieces::getColor() {
    return color;
}