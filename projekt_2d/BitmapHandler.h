#ifndef BITMAPHANDLER_H
#define BITMAPHANDLER_H

#include <SFML/Graphics.hpp>
#include <string>

// Klasa do obs³ugi obrazów
class BitmapHandler {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    bool loadFromFile(const std::string& path); // Wczytywanie obrazu
    void draw(sf::RenderWindow& window); // Rysowanie obrazu
};

#endif
