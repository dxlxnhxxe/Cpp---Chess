#include "Board.h"
#include "Pawns.h"
#include "Bishops.h"
#include "Rooks.h"
#include "Kings.h"
#include "Queens.h"
#include "Knights.h"
#include <iostream>



Board::Board() {
    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {
            board[r][c] = nullptr;
        }
    }
}

void Board::initialise() {
    initialisePawns();
    initialiseBishops();
    initialiseKnights();
    initialiseRooks();
    initialiseQueens();
    initialiseKings();
}

void Board::initialisePawns() {

    if (!whitePawnTexture.loadFromFile("assets/pieces/wP.png")) {
        std::cout << "Failed white pawn texture\n";
    }

    if (!blackPawnTexture.loadFromFile("assets/pieces/bP.png")) {
        std::cout << "Failed black pawn texture\n";
    }

    //White pawns
    for (int c = 0; c < 8; c++) {
        board[6][c] = new Pawns(PieceColor::White);
        board[6][c]->setTexture(whitePawnTexture);
        board[6][c]->setScale(64.f / 2048.f, 64.f / 2048.f);
        board[6][c]->setPosition(c * TILE_SIZE, 6 * TILE_SIZE);
    }

    //Black pawns
    for (int c = 0; c < 8; c++) {
        board[1][c] = new Pawns(PieceColor::Black);
        board[1][c]->setTexture(blackPawnTexture);
        board[1][c]->setScale(64.f / 2048.f, 64.f / 2048.f);
        board[1][c]->setPosition(c * TILE_SIZE, 1 * TILE_SIZE);
    }
}

void Board::initialiseBishops() {
    if (!whiteBishopTexture.loadFromFile("assets/pieces/wB.png")) {
        std::cout << "Failed white bishop texture\n";
    }
    if (!blackBishopTexture.loadFromFile("assets/pieces/bB.png")) {
        std::cout << "Failed black bishop texture\n";
    }

    //White Bishops
    board[7][2] = new Bishops(PieceColor::White);
    board[7][2]->setTexture(whiteBishopTexture);
    board[7][2]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][2]->setPosition(2 * TILE_SIZE, 7 * TILE_SIZE);
    board[7][5] = new Bishops(PieceColor::White);
    board[7][5]->setTexture(whiteBishopTexture);
    board[7][5]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][5]->setPosition(5 * TILE_SIZE, 7 * TILE_SIZE);

    //Black Bishops
    board[0][2] = new Bishops(PieceColor::Black);
    board[0][2]->setTexture(blackBishopTexture);
    board[0][2]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][2]->setPosition(2 * TILE_SIZE, 0 * TILE_SIZE);
    board[0][5] = new Bishops(PieceColor::Black);
    board[0][5]->setTexture(blackBishopTexture);
    board[0][5]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][5]->setPosition(5 * TILE_SIZE, 0 * TILE_SIZE);
}

void Board::initialiseKnights() {
    if (!whiteKnightTexture.loadFromFile("assets/pieces/wN.png")) {
        std::cout << "Failed white knight texture\n";
    }
    if (!blackKnightTexture.loadFromFile("assets/pieces/bN.png")) {
        std::cout << "Failed black knight texture\n";
    }
    //White Knights
    board[7][1] = new Knights(PieceColor::White);
    board[7][1]->setTexture(whiteKnightTexture);
    board[7][1]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][1]->setPosition(1 * TILE_SIZE, 7 * TILE_SIZE);
    board[7][6] = new Knights(PieceColor::White);
    board[7][6]->setTexture(whiteKnightTexture);
    board[7][6]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][6]->setPosition(6 * TILE_SIZE, 7 * TILE_SIZE);

    //Black Knights
    board[0][1] = new Knights(PieceColor::Black);
    board[0][1]->setTexture(blackKnightTexture);
    board[0][1]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][1]->setPosition(1 * TILE_SIZE, 0 * TILE_SIZE);
    board[0][6] = new Knights(PieceColor::Black);
    board[0][6]->setTexture(blackKnightTexture);
    board[0][6]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][6]->setPosition(6 * TILE_SIZE, 0 * TILE_SIZE);
}

void Board::initialiseRooks() {
    if (!whiteRookTexture.loadFromFile("assets/pieces/wR.png")) {
        std::cout << "Failed white rook texture\n";
    }
    if (!blackRookTexture.loadFromFile("assets/pieces/bR.png")) {
        std::cout << "Failed black rook texture\n";
    }
    //White Rooks
    board[7][0] = new Rooks(PieceColor::White);
    board[7][0]->setTexture(whiteRookTexture);
    board[7][0]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][0]->setPosition(0 * TILE_SIZE, 7 * TILE_SIZE);
    board[7][7] = new Rooks(PieceColor::White);
    board[7][7]->setTexture(whiteRookTexture);
    board[7][7]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][7]->setPosition(7 * TILE_SIZE, 7 * TILE_SIZE);


    //Black Rooks
    board[0][0] = new Rooks(PieceColor::Black);
    board[0][0]->setTexture(blackRookTexture);
    board[0][0]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][0]->setPosition(0 * TILE_SIZE, 0 * TILE_SIZE);
    board[0][7] = new Rooks(PieceColor::Black);
    board[0][7]->setTexture(blackRookTexture);
    board[0][7]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][7]->setPosition(7 * TILE_SIZE, 0 * TILE_SIZE);
}

void Board::initialiseQueens() {
    if (!whiteQueenTexture.loadFromFile("assets/pieces/wQ.png")) {
        std::cout << "Failed white queen texture\n";
    }
    if (!blackQueenTexture.loadFromFile("assets/pieces/bQ.png")) {
        std::cout << "Failed black queen texture\n";
    }
    //White Queen
    board[7][3] = new Queens(PieceColor::White);
    board[7][3]->setTexture(whiteQueenTexture);
    board[7][3]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][3]->setPosition(3 * TILE_SIZE, 7 * TILE_SIZE);

    //Black Queen
    board[0][3] = new Queens(PieceColor::Black);
    board[0][3]->setTexture(blackQueenTexture);
    board[0][3]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][3]->setPosition(3 * TILE_SIZE, 0 * TILE_SIZE);
}

void Board::initialiseKings() {
    if (!whiteKingTexture.loadFromFile("assets/pieces/wK.png")) {
        std::cout << "Failed white king texture\n";
    }
    if (!blackKingTexture.loadFromFile("assets/pieces/bK.png")) {
        std::cout << "Failed black king texture\n";
    }

    //White King
    board[7][4] = new Kings(PieceColor::White);
    board[7][4]->setTexture(whiteKingTexture);
    board[7][4]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[7][4]->setPosition(4 * TILE_SIZE, 7 * TILE_SIZE);

    //Black King
    board[0][4] = new Kings(PieceColor::Black);
    board[0][4]->setTexture(blackKingTexture);
    board[0][4]->setScale(64.f / 2048.f, 64.f / 2048.f);
    board[0][4]->setPosition(4 * TILE_SIZE, 0 * TILE_SIZE);
}

void Board::draw(sf::RenderWindow& window) {
    //Draw the board tiles
    sf::RectangleShape tile(sf::Vector2f(TILE_SIZE, TILE_SIZE));
    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {
            if ((r + c) % 2 == 0) {
                tile.setFillColor(sf::Color(240, 217, 181));
            } else {
                tile.setFillColor(sf::Color(181, 136, 99));
            }
            tile.setPosition(c * TILE_SIZE, r * TILE_SIZE);
            window.draw(tile);
        }
    }

    //Draw pieces from state
    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {
            if (board[r][c] != nullptr) {
                board[r][c]->draw(window);
            }
        }
    }
}