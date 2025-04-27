#include "InputHandler.h"

// Funkcja przechwytuj¹ca zdarzenia, np. zamkniêcie okna
void InputHandler::processEvents(sf::RenderWindow& window) {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close(); // Zamkniêcie okna
    }
}
