#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    void push(int x) {
        // Queue Full
        if ((rear + 1) % size == front) {
            cout << "Queue Overflow\n";
            return;
        }

        // First Element
        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
    }

    void pop() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }

    int Front() {
        if (front == -1)
            return -1;

        return arr[front];
    }

    bool empty() {
        return front == -1;
    }
};

int main() {
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.Front() << endl; // 10

    q.pop();

    cout << q.Front() << endl; // 20

    return 0;
}