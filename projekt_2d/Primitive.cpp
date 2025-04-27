#include "Primitive.h"

// Funkcja dodaj¹ca liniê do figury
void Primitive::addLine(Point2D p1, Point2D p2, sf::Color color) {
    vertices.push_back(sf::Vertex(sf::Vector2f(p1.x, p1.y), color));
    vertices.push_back(sf::Vertex(sf::Vector2f(p2.x, p2.y), color));
}

// Funkcja rysuj¹ca wszystkie linie figury
void Primitive::draw(sf::RenderWindow& window) {
    window.draw(&vertices[0], vertices.size(), sf::Lines);
}
