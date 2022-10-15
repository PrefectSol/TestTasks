#include "Headings.h"
#include "MathVector.h"

MathVector::MathVector(int x0, int y0, int x1, int y1) : x0(x0), y0(y0), x1(x1), y1(y1) {
    x = x1 - x0;
    y = y1 - x0;

    isZero = x == 0 && y == 0 ? true : false;

    lenght = sqrt(pow(x, 2) + pow(y, 2));
};

int MathVector::GetX() { return x; }

int MathVector::GetY() { return y; }

double MathVector::GetLenght() { return lenght; }

double MathVector::GetCos(MathVector &vec1, MathVector &vec2) {
    if (vec1.isZero || vec2.isZero) return -1;

    return (vec1.GetX() * vec2.GetX() + vec1.GetY() * vec2.GetY()) / 
        (sqrt(pow(vec1.GetX(), 2) + pow(vec1.GetY(), 2)) * sqrt(pow(vec2.GetX(), 2) + pow(vec2.GetY(), 2)));
}

bool MathVector::isCollinear(MathVector &vec1, MathVector &vec2) {
    return (vec1.GetX() / vec2.GetX()) == (vec1.GetY() / vec2.GetY());
}