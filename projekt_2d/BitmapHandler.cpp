#include "BitmapHandler.h"

// Funkcja wczytuj�ca obraz z pliku
bool BitmapHandler::loadFromFile(const std::string& path) {
    if (!texture.loadFromFile(path))
        return false;
    sprite.setTexture(texture);
    return true;
}

// Funkcja rysuj�ca obraz na ekranie
void BitmapHandler::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}
