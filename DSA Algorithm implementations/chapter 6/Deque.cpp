#include <iostream>
using namespace std;

const int SIZE = 5;
int arr[SIZE];
int front = -1, rear = -1;

// Check if the deque is full
bool isFull() {
    return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

// Check if the deque is empty
bool isEmpty() {
    return front == -1;
}

// Insert at rear
void insertRear(int item) {
    if (isFull()) {
        cout << "Queue is full (rear insert)\n";
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }

    arr[rear] = item;
    cout << "Inserted " << item << " at rear\n";
}

// Insert at front
void insertFront(int item) {
    if (isFull()) {
        cout << "Queue is full (front insert)\n";
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }

    arr[front] = item;
    cout << "Inserted " << item << " at front\n";
}

// Display the queue
void display() {
    if (isEmpty()) {
        cout << "Deque is empty\n";
        return;
    }
    cout << "Deque contents: ";
    int i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % n;
    }
    cout << endl;
}
// Main
int main() {
    insertRear(10);   // rear = 0
    insertRear(20);   // rear = 1
    insertFront(5);   // front = 4
    insertFront(2);   // front = 3
    insertRear(30);   // rear = 2 (circular wrap)

    display();

    insertFront(99);  // should print "Queue is full"

    return 0;
}
