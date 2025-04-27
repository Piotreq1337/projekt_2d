#pragma once
#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Point2D.h"
#include <cmath>

// Klasa obs³uguj¹ca operacje geometryczne na figurach
class Transform {
public:
    static Point2D translate(Point2D p, float dx, float dy); // Przesuniêcie
    static Point2D scale(Point2D p, float sx, float sy); // Skalowanie
    static Point2D rotate(Point2D p, float angle); // Obrót
};

#endif
