#pragma once

#include "MathVector.h"

MathVector operator+(MathVector &vec1, MathVector &vec2) {
    return MathVector(vec1.GetX() + vec2.GetX(), vec1.GetY() + vec2.GetY());
}

MathVector operator-(MathVector &vec1, MathVector &vec2) {
    return MathVector(vec1.GetX() - vec2.GetX(), vec1.GetY() - vec2.GetY());
}

double operator*(MathVector &vec1, MathVector &vec2) {
    return (vec1.GetLenght() * vec2.GetLenght() * MathVector::GetCos(vec1, vec2));
}