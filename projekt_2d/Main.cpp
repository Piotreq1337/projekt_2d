#include <SFML/Graphics.hpp>
#include "InputHandler.h"
#include "Primitive.h"
#include "BitmapHandler.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Silnik 2D w SFML");
    InputHandler input;

    // Tworzymy obiekt figury (prostok¹t)
    Primitive rectangle;
    rectangle.addLine(Point2D(100, 100), Point2D(300, 100), sf::Color::Red);
    rectangle.addLine(Point2D(300, 100), Point2D(300, 300), sf::Color::Red);
    rectangle.addLine(Point2D(300, 300), Point2D(100, 300), sf::Color::Red);
    rectangle.addLine(Point2D(100, 300), Point2D(100, 100), sf::Color::Red);

    // Wczytujemy obraz (bitmapê)
    BitmapHandler image;
    //if (!image.loadFromFile("assets/face.jpg")) {
     //   return -1; // Zakoñcz program, jeœli obraz siê nie wczyta³
    //}

    // G³ówna pêtla gry
    while (window.isOpen()) {
        input.processEvents(window);

        window.clear();

        // Rysujemy prostok¹t
        rectangle.draw(window);

        // Rysujemy bitmapê
        image.draw(window);

        window.display();
    }

    return 0;
}
