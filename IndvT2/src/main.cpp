#include "LinkList.hpp"
#include "Stack.h"

int main() {
    // ------------------ Задача 1 ------------------ //
    LinkList* root = new LinkList("root");
    Push(root, "1");
    Push(root, "2");
    Push(root, "3");
    Push(root, "4");

    Pop(root);
    
    Show(root);

    cout << IsContains(root, "roo5t") << endl;
    cout << Peek(root) << endl << endl;

    Clear(root);

    // ------------------ Задача 2 ------------------ //
    Stack stack("root");

    stack.Push("1");
    stack.Push("2");
    stack.Push("3");
    stack.Push("4");

    stack.Pop();

    stack.Show();

    cout << stack.IsContains("3") << endl;
    cout << stack.Peek() << endl;

    return 0;
}