#include "Transform.h"

// Funkcja przesuwaj¹ca punkt o zadany wektor
Point2D Transform::translate(Point2D p, float dx, float dy) {
    return Point2D(p.x + dx, p.y + dy);
}

// Funkcja skaluj¹ca punkt wzglêdem œrodka
Point2D Transform::scale(Point2D p, float sx, float sy) {
    return Point2D(p.x * sx, p.y * sy);
}

// Funkcja obracaj¹ca punkt wokó³ pocz¹tku uk³adu o zadany k¹t
Point2D Transform::rotate(Point2D p, float angle) {
    float rad = angle * 3.14 / 180.0;
    return Point2D(
        p.x * cos(rad) - p.y * sin(rad),
        p.x * sin(rad) + p.y * cos(rad)
    );
}
