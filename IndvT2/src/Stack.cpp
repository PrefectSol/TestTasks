#include "Stack.h"

Stack::StackList::StackList(string data) {
    Stack::StackList::data = data;
}

Stack::StackList::StackList() {}

Stack::Stack(string data) {
    root = new StackList(data);
}

Stack::~Stack() {
    Stack::Clear();
}

void Stack::Push(string data) {
    StackList* head = root;

    if (root == nullptr) {
        root = new StackList(data);
        return;
    }

    while(root->next != nullptr) 
        root = root->next;

    root->next = new StackList();
    root->next->data = data;

    root = head;
}

void Stack::Pop() {
    StackList* head = root;
    while(root->next->next != nullptr) root = root->next;

    delete root->next;

    root->next = NULL;

    root = head;
}

bool Stack::IsContains(string data) {
    while(root != nullptr) {
        if (root->data == data) return true;
        root = root->next;
    }

    return false;
}

string Stack::Peek() {
    StackList* head = root;
    while(root->next != nullptr) root = root->next;
    
    string result = root->data;
    root = head;

    return result;
}

void Stack::Clear() {
    while(root != nullptr) {
        StackList* temp = root;
        root = root->next;

        delete temp;
    }
}

void Stack::Show() {
    StackList* head = root;
    while(root != nullptr) {
        cout << root->data << "\t" << root << endl;
        root = root->next;
    }

    root = head;
}