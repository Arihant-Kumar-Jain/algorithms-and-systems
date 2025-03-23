#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

class stack{


public:
	Node* top;
	stack(){
		top = nullptr;
	}
	void push(int val){
		Node* newNode = new Node();
		newNode->data = val;
		newNode->next = top;
		top = newNode;
	}

	int pop(){
		if(isempty()){
			cout<<"stack overflow\n";
			return -1;
		}
		Node* temp = top;
		top = top->next;
		int popped = temp->data;
		delete temp;
		return popped;
	}

	bool isempty(){
		return top == nullptr;
	}

	int peek(){
		return (top?top->data:-1);
	}
};

void movedisk(stack &src, stack &des, char s, char d){
	int disk1 = src.isempty()?-1:src.pop();
	int disk2 = des.isempty()?-1:des.pop();

	if(disk1 == -1){
		src.push(disk2);
		cout << "move disk" << disk2 << "from" << d << "to" << s <<"\n";
	}else if(disk2 == -1){
		des.push(disk1);
		cout << "move disk" << disk1 << "from" << s << "to" << d << "\n";
	}else if(disk1>disk2){
		src.push(disk1);
		src.push(disk2);
		cout<<"move disk"<< disk2 <<"from" << d <<"to" << s<<"\n";
	}
	else{
		des.push(disk2);
		des.push(disk1);
		cout << "move disk" << disk1 << "from" << s << "to" << d << "\n";
	}
}

void towerofhanoi(int n, stack &src, stack &aux, stack &des, char s, char a, char d){
	int moves = (1<<n)-1;
	for(int i = n; i>=1; i--){
		src.push(i);
	}

	for(int i = 0; i<moves; i++){
		if(i%3 == 1){
			movedisk(src, des, s, d);
		}else if(i%3 == 2){
			movedisk(src, aux, s, a);
		}else if(i%3 == 0){
			movedisk(aux, des, a, d);
		}
	}
}

int main(){
	int n; cin>>n;
	stack aux, src, des;

	towerofhanoi(n, src, aux, des, 'a', 'b', 'c');
}