#include <iostream>
using namespace std;

struct Node{
	string data;
	Node* next;
	Node(string val) : data(val), next(nullptr){}
};

class stack{
public:
	Node* top;
	stack(){
		top = nullptr;
	}

	void push(string val){
		Node* newnode = new Node(val);
		newnode->next = top;
		top = newnode;
	}

	string pop(){
		if(top == nullptr) return "";
		Node* temp = top;
		top = top->next;
		string popped = temp->data;
		delete temp;
		return popped; 
	}

	bool isempty(){
		return top==nullptr;
	}
};

bool isOperator(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixToInfix(string postfix){
	stack s;

	for(int i = 0; postfix[i]!='\0'; i++){
		char c = postfix[i];

		if(!isOperator(c)){
			string operand(1,c);
			s.push(operand);
		}else{
			string operand2 = s.pop();
			string operand1 = s.pop();
			string expression = '(' + operand1 + c + operand2 + ')';
			s.push(expression);
		}
	}

	return s.pop();
}

int main(){
	string str = "ABC*D-+";
	cout << postfixToInfix(str);
}