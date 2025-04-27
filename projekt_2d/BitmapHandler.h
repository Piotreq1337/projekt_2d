#ifndef BITMAPHANDLER_H
#define BITMAPHANDLER_H

#include <SFML/Graphics.hpp>
#include <string>

// Klasa do obs�ugi obraz�w
class BitmapHandler {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    bool loadFromFile(const std::string& path); // Wczytywanie obrazu
    void draw(sf::RenderWindow& window); // Rysowanie obrazu
};

#endif
