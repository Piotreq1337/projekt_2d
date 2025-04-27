#include "BitmapHandler.h"

// Funkcja wczytuj¹ca obraz z pliku
bool BitmapHandler::loadFromFile(const std::string& path) {
    if (!texture.loadFromFile(path))
        return false;
    sprite.setTexture(texture);
    return true;
}

// Funkcja rysuj¹ca obraz na ekranie
void BitmapHandler::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}
