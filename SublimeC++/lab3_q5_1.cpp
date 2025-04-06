#include <iostream>

using namespace std;

struct Node {
    char data;
    Node* next;
    Node(char val) : data(val), next(nullptr) {}
};

struct Stack {
    Node* top;
    Stack() : top(nullptr) {}
    
    void push(char val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
    
    char pop() {
        if (top == nullptr) return '\0';
        char val = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }
    
    bool isEmpty() {
        return top == nullptr;
    }
    
    char peek() {
        return top ? top->data : '\0';
    }
};

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(string infix) {
    Stack s;
    string postfix = "";
    
    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];
        
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            postfix += ch; // Append operand to output
        } else if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }
            s.pop(); // Remove '(' from stack
        } else { // Operator
            while (!s.isEmpty() && precedence(s.peek()) >= precedence(ch)) {
                postfix += s.pop();
            }
            s.push(ch);
        }
    }
    
    while (!s.isEmpty()) {
        postfix += s.pop();
    }
    
    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;
    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;
    return 0;
}
