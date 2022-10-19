#include "Headings.h"

using namespace std;

typedef struct LinkList {
    string data;

    LinkList* next;

    LinkList (string data);
    LinkList ();
};

LinkList::LinkList(string data) {
    LinkList::data = data;
}

LinkList::LinkList() {}

void Push(LinkList* root, string data) {
    while(root->next != nullptr) root = root->next;

    root->next = new LinkList();
    root->next->data = data;
}

void Pop(LinkList* root) {
    while(root->next->next != nullptr) root = root->next;

    delete root->next;

    root->next = NULL;
}

bool IsContains(LinkList* root, string data) {
    while(root->next != nullptr) {
        if (root->data == data) return true;
        root = root->next;
    }

    return false;
}

string Peek(LinkList* root) {
    while(root->next != nullptr) root = root->next;

    return root->data;
}

void Clear(LinkList* root) {
    LinkList* head = root;

    while(root != nullptr) {
        LinkList* temp = root;
        root = root->next;

        delete temp;
    }

    head->next = NULL;
}

void Show(LinkList* root) {
    while(root != nullptr) {
        cout << root->data << "\t" << root << endl;
        root = root->next;
    }
}