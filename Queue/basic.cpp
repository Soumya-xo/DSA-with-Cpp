// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Front: " << q.front() << endl;
//     cout << "Back: " << q.back() << endl;
//     cout << "Size: " << q.size() << endl;

//     q.pop();

//     cout << "After pop" << endl;
//     cout << "Front: " << q.front() << endl;
//     cout << "Size: " << q.size() << endl;

//     return 0;
// }


// USING LINKEDLIST
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

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    // Insert
    void push(int x) {
        Node* temp = new Node(x);

        if (rear == NULL) {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    // Delete
    void pop() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    int Front() {
        if (front == NULL)
            return -1;

        return front->data;
    }

    bool empty() {
        return front == NULL;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.Front() << endl;

    q.pop();

    cout << "Front after pop: " << q.Front() << endl;

    return 0;
}