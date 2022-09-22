#include "Headings.h"

using namespace std;

int main() {
    srand(time(NULL));

    const unsigned int SIZE = 55;
    
    clock_t start, end;
    int num = 1;
    int* pNum = &num;
    int** ppNum = &pNum;

    int arr[SIZE];

    start = clock();
    for(int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 112;
        cout << arr[i] << "\t";
    }

    cout << endl << endl << endl;
    
    int* startP = arr;
    for(int i = 0; i < SIZE; i++) {
        if ((*startP % 2 == 0) && (i % 2 == 0)) *startP += **ppNum;
        cout << *startP << "\t";
        
        startP++;
    }

    end = clock();
    cout << endl << printf("Time: %lf", (end - start) / 1000.0);
}