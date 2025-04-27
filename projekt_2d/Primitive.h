#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Point2D.h"

// Klasa do rysowania podstawowych figur geometrycznych
class Primitive {
public:
    std::vector<sf::Vertex> vertices; // Zbi�r wierzcho�k�w do rysowania

    // Dodanie linii mi�dzy dwoma punktami o okre�lonym kolorze
    void addLine(Point2D p1, Point2D p2, sf::Color color);

    // Rysowanie figur na ekranie
    void draw(sf::RenderWindow& window);
};

#endif
