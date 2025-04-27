#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SFML/Graphics.hpp>

// Klasa do obs³ugi zdarzeñ klawiatury i myszy
class InputHandler {
public:
    // Funkcja przechwytuj¹ca zdarzenia u¿ytkownika
    void processEvents(sf::RenderWindow& window);
};

#endif
