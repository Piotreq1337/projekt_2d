#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SFML/Graphics.hpp>

// Klasa do obs�ugi zdarze� klawiatury i myszy
class InputHandler {
public:
    // Funkcja przechwytuj�ca zdarzenia u�ytkownika
    void processEvents(sf::RenderWindow& window);
};

#endif
