#include "Headings.h"

using namespace std;

string ToLowerCase(string str, const int len) {
    string lowStr = "";

    for(int i = 0; i < len; i++) {
        char s = str[i];
        if ((int)s >= 65 && (int)s <= 90) {
            lowStr += (char)((int)s + 32);
        }
        else {
            lowStr += s;
        }
    }

    return lowStr;
}

char GetFrequentSymb(string str, const int len) {
    char freq = ' ';

    int maxCount = 0;
    for(int i = 0; i < len; i++) {
        char symb = str[i];
        int count = 1;

        for(int j = 0; j < str.length(); j++) {
            if (i == j) continue;

            char checkSymb = str[j];
            if (symb == checkSymb) count++;
        }

        if (count > maxCount) {
            maxCount = count;
            freq = symb;
        }
    }

    return freq;
}

int main() {
    const string str = "FEFEFEKFEN";
    const unsigned int len = sizeof("FEFEFEKFEN") - 1;

    string lowStr = ToLowerCase(str, len);
    char freqSymb = GetFrequentSymb(lowStr, len);

    string result = "";
    for(int i = 0; i < len; i++) {
        result += freqSymb;
    }

    cout << result << endl;

    return 0;
}