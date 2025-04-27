#include "InputHandler.h"

// Funkcja przechwytuj�ca zdarzenia, np. zamkni�cie okna
void InputHandler::processEvents(sf::RenderWindow& window) {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close(); // Zamkni�cie okna
    }
}
