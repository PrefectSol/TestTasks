#include "Headings.h"

using namespace std;

int main() {
    const unsigned int width = 17;

    int count = 0;
    int num;
    
    cin.unsetf(ios::dec);
    cin.setf(ios::hex);
    
    while (count != 2) {
        cout.width(width);
        cout << "$$$$$$$$$$$$$" << endl;

        cin >> num;

        if (num == 16) count++;

        string result = (num == 16) ? "true" : "false";
        
        cout.width(width);
        cout << result << endl;

        cout.width(width);
        cout << "$$$$$$$$$$$$$" << endl << endl;
    }
}