#pragma once

class MathVector {
private:
    int lenght;

    int x0, y0, x1, y1;

    int x, y;

    bool isZero;

    MathVector() = delete;
    
    MathVector(const MathVector &) = delete;

public:
    MathVector(int x0, int y0, int x1, int y1);

    int GetX();

    int GetY();

    double GetLenght();

    static double GetCos(MathVector &vec1, MathVector &vec2);

    static bool isCollinear(MathVector &vec1, MathVector &vec2);
};