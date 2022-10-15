#include "Headings.h"
#include "MathVectorOperations.h"

using namespace std;

int main() {
    MathVector v1(0, 3); 
    MathVector v2(-1, 9);

    cout << v1.GetLenght() << endl;
    cout << v2.GetLenght() << endl;

    cout << v1.GetX() << endl;
    cout << v1.GetY() << endl;

    cout << v2.GetX() << endl;
    cout << v2.GetY() << endl;

    cout << MathVector::GetCos(v1, v2) << endl;
    cout << MathVector::isCollinear(v1, v2) << endl;

    MathVector sum = v1 + v2;
    MathVector diff = v1 - v2;
    double multi = v1 * v2;

    cout << sum.GetLenght() << endl;
    cout << diff.GetLenght() << endl;
    cout << multi << endl;
}
