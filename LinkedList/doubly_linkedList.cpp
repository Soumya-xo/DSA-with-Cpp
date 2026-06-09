#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void pushFront(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void pushBack(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void popFront(Node*& head, Node*& tail) {
    if(head == NULL) return;

    if(head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

void popBack(Node*& head, Node*& tail) {
    if(head == NULL) return;

    if(head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
}

void printForward(Node* head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    pushBack(head, tail, 10);
    pushBack(head, tail, 20);
    pushBack(head, tail, 30);

    printForward(head);

    pushFront(head, tail, 5);
    printForward(head);

    popFront(head, tail);
    printForward(head);

    popBack(head, tail);
    printForward(head);

    return 0;
}