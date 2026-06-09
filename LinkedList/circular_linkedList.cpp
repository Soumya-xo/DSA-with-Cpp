#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void pushBack(Node*& head, int val) {

    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* tail = head;

    while(tail->next != head)
        tail = tail->next;

    tail->next = newNode;
    newNode->next = head;
}

void printList(Node* head) {

    if(head == NULL)
        return;

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);

    cout << endl;
}

int main() {

    Node* head = NULL;

    pushBack(head, 10);
    pushBack(head, 20);
    pushBack(head, 30);

    printList(head);

    return 0;
}