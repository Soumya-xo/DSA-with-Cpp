// PUSH OPERATION

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// void pushFront(Node*& head, int val) {
//     Node* newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// void pushBack(Node*& head, int val) {
//     Node* newNode = new Node(val);

//     if(head == NULL) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != NULL)
//         temp = temp->next;

//     temp->next = newNode;
// }

// void printList(Node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout<<endl;
// }

// int main() {
//     Node* head = NULL;

//     pushBack(head, 10);
//     pushBack(head, 20);
//     pushBack(head, 30);

//     pushFront(head, 5);

//     printList(head);
// }




//   POP OPERATION

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// void printList(Node* head) {
//     while(head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// void popFront(Node*& head) {

//     if(head == NULL)
//         return;

//     Node* temp = head;

//     head = head->next;

//     delete temp;
// }

// void popBack(Node*& head) {

//     if(head == NULL)
//         return;

//     // Only one node
//     if(head->next == NULL) {
//         delete head;
//         head = NULL;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next->next != NULL) {
//         temp = temp->next;
//     }

//     delete temp->next;

//     temp->next = NULL;
// }

// int main() {

//     // Create: 10 -> 20 -> 30
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);

//     cout << "Original: ";
//     printList(head);

//     popFront(head);
//     cout << "After popFront: ";
//     printList(head);

//     popBack(head);
//     cout << "After popBack: ";
//     printList(head);

//     return 0;
// }





// INSERT IN THE MIDDLE

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

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtPosition(Node*& head, int pos, int val) {

    Node* newNode = new Node(val);

    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Before: ";
    printList(head);

    insertAtPosition(head, 3, 25);

    cout << "After: ";
    printList(head);

    return 0;
}