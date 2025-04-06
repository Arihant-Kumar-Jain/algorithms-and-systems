#include <iostream>

using namespace std;

// Node structure for stack
class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Stack implemented using linked list
class Stack {
public:
    Node* top;
    
    Stack() {
        top = nullptr;
    }
    
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
    
    int pop() {
        if (isEmpty()) return -1; // Return -1 if stack is empty
        int val = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }
    
    int peek() {
        return isEmpty() ? -1 : top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

// Function to move disk and print the movement
void moveDisk(Stack &src, Stack &dest, char s, char d) {
    int disk = src.pop();
    dest.push(disk);
    cout << "Move disk " << disk << " from " << s << " to " << d << endl;
}

// Recursive Tower of Hanoi function
void towerOfHanoi(int n, Stack &src, Stack &aux, Stack &dest, char S, char A, char D) {
    if (n == 1) {
        moveDisk(src, dest, S, D);
        return;
    }

    towerOfHanoi(n - 1, src, dest, aux, S, D, A);
    moveDisk(src, dest, S, D);
    towerOfHanoi(n - 1, aux, src, dest, A, S, D);
}

// Main function
int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    Stack src, aux, dest;

    // Push disks to source stack
    for (int i = n; i >= 1; i--) {
        src.push(i);
    }

    towerOfHanoi(n, src, aux, dest, 'A', 'B', 'C');

    return 0;
}