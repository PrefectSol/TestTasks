#pragma once

class MathVector {
private:
    int lenght;
    
    int x, y;

    bool isZero;

    MathVector() = delete;
    
    MathVector(const MathVector &) = delete;

    void SetLenght();

public:
    MathVector(int x, int y);

    int GetX();

    int GetY();

    void SetX(int x);

    void SetY(int y);

    double GetLenght();

    static double GetCos(MathVector &vec1, MathVector &vec2);

    static bool isCollinear(MathVector &vec1, MathVector &vec2);
};