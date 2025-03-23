#include <iostream>
using namespace std;

struct Node{
	char data;
	Node* next;
};

class stack{
public:
	Node* top;
	stack(){
		top = nullptr;
	}

	bool isempty(){
		return top == nullptr;
	}

	void push(char val){
		Node* newnode = new Node();
		newnode->data = val;
		newnode->next = top;
		top = newnode;
	}

	void pop(){
		if(isempty()){
			cout << "underflow!!";
			return;
		}
		Node* temp = top;
		top = temp->next;
		char popped = temp->data;
		delete temp;
	}

	char peek(){
		if(top == nullptr) return '\0';
		return top->data;
	}
};

bool isBalanced(string exp){
	stack s;
	for(char it : exp){
		if(it == '(' || it == '{' || it == '['){
			s.push(it);
		}else if(it == ')' || it == '}' || it == ']'){
			if(s.isempty()) return false;
			char x = s.peek();
			if((x == '(' && it == ')') ||
				(x == '{' && it == '}')||
				(x == '[' && it == ']')){
				s.pop();
			}else{
				return false;
			}

		}
	}
	return s.isempty();
}

int main(){
	string exp;
	cin>>exp;

	if(isBalanced(exp)){
		cout << "yes";
	}else{
		cout << "no";
	}
}