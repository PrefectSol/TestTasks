#include "Headings.h"
#include "MathVector.h"

using namespace std;

int main() {
    MathVector v1(0,0, 5,5);
    MathVector v2(-1,-1, 9,1);

    cout << v1.GetLenght() << endl;
    cout << v2.GetLenght() << endl;

    cout << v1.GetX() << endl;
    cout << v1.GetY() << endl;

    cout << v2.GetX() << endl;
    cout << v2.GetY() << endl;

    cout << MathVector::GetCos(v1, v2) << endl;
    cout << MathVector::isCollinear(v1, v2) << endl;
}