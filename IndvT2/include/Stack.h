#pragma once

#include "Headings.h"

using namespace std;

class Stack {
private:
    typedef struct StackList {
        string data;
        StackList* next;

        StackList (string data);
        StackList ();
    };

    StackList* root;
    
    Stack();

public:
    Stack(string data);

    ~Stack();

    void Show();

    void Push(string data);

    void Pop();

    void Clear();

    bool IsContains(string data);

    string Peek();
};