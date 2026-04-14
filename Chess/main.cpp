//
// Created by Dylan Haye on 09/04/2026.
//

#include "main.h"
#include <SFML/Graphics.hpp>
#include "Board.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(512, 512), "Chess Engine");

    Board board;
    board.initialise();

    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        board.draw(window);
        window.display();
    }

    return 0;
}