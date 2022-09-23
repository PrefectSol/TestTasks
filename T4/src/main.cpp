#include "Headings.h"

using namespace std;

void ToLowerCase(char str[], const int len) {
    for(int i = 0; i < len; i++) {
        char s = str[i];
        if ((int)s >= 65 && (int)s <= 90) {
            str[i] = (char)((int)s + 32);
        }
        else {
            str[i] = s;
        }
    }
}

char GetFrequentSymb(char str[], const int len) {
    char freq = ' ';

    int maxCount = 0;
    for(int i = 0; i < len; i++) {
        char symb = str[i];
        int count = 1;

        for(int j = 0; j < len; j++) {
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

void Copy(const char from[], char in[], const int len) {
    for(int i = 0; i < len; i++) {
        in[i] = from[i];
    }
}

int main() {
    const char str[] = "FEFEFEKFEN";
    const unsigned int len = sizeof("FEFEFEKFEN");

    char lowStr[len];
    Copy(str, lowStr, len);

    ToLowerCase(lowStr, len);
    char freqSymb = GetFrequentSymb(lowStr, len);

    char result[len];
    for(int i = 0; i < len - 1; i++) {
        result[i] = freqSymb;
    }

    result[len - 1] = '\000';
    
    cout << str << endl;
    cout << result << endl;

    return 0;
}