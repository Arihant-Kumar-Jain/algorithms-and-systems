#include <iostream>
using namespace std;

// Node structure for linked list
class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Function to insert at the end
    void insert(int val) {
        if (head == nullptr) {
            head = new Node(val);
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new Node(val);
    }

    // Function to find elements at positions n/2, n/3, ..., n/k
    void findDynamicPositions() {
        if (head == nullptr) return;

        Node* current = head;
        Node* fractionPointers[100] = {nullptr};  // Initialize all to nullptr
        int count = 0;

        while (current != nullptr) {
            count++;  // Track node count dynamically

            for (int k = 1; k <= count; k++) {
                if (count % k == 0) {
                    if (fractionPointers[k - 1] == nullptr) {
                        fractionPointers[k - 1] = head;
                    } else {
                        fractionPointers[k - 1] = fractionPointers[k - 1]->next;
                    }
                }
            }

            current = current->next;
        }

        // Output the required positions
        for (int k = 1; k < count; k++) {
            if (fractionPointers[k] != nullptr) {
                cout << "Element at n/" << (k + 1) << " position: " << fractionPointers[k]->data << endl;
            }
        }
    }
};

// Main function
int main() {
    LinkedList list;
    int value;

    cout << "Enter values for linked list (Enter -1 to stop): ";
    while (true) {
        cin >> value;
        if (value == -1) break;
        list.insert(value);
    }

    cout << "Finding elements at dynamic positions..." << endl;
    list.findDynamicPositions();

    return 0;
}