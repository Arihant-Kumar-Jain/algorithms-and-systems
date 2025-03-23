#include <iostream>
using namespace std;
#define MAX_SIZE 5

class cQueue{
private:
	int front,rear,size;
	int queue[MAX_SIZE];
public:
	cQueue(){
		front = rear = -1;
		size = 0;
	}

	bool isFull(){
		if(size == MAX_SIZE) return true;
		return false;
	}

	bool isEmpty(){
		if(size == 0) return true;
		return false;
	}

	void enqueue(int customerID){
		if(isFull()){
			cout << "The queue is full! Kindly allocate tickets.";
			return;
		}
		if(front == -1) front = 0;
		rear = (rear+1)%MAX_SIZE;
		queue[rear] = customerID;
		size++;
		cout << "Customer " << customerID << " added to the queue.";
	}

	void dequeue(){
		if (isEmpty()){
			cout << "No entry found as the queue is empty!";
			return;
		}
		cout << "Ticket allocated to: " << queue[front];
		front = (front+1)%MAX_SIZE;
		size--;
		if(size == 0) front = rear = -1;
	}

	void print(){
		cout << "The required queue is: ";
		for(int i = 0, index = front; i<size; i++, index = (index+1)%MAX_SIZE){
			cout << queue[index];
		}
	}

};

int main(){
	cQueue ticketQueue;
	int choice, customerID;

	do{
		cout<<"\n Ticketing system \n";
		cout<<"1. Add a customer to the queue.\n";
		cout<<"2. Allocate a ticket.\n";
		cout<<"3. Print the queue.\n";
		cout<<"4. Exit.\n";
		cin>>choice;

		switch(choice){
		case 1:
			cout << "Enter the customerID: ";
			cin>>customerID;
			ticketQueue.enqueue(customerID);
			break;

		case 2:
			ticketQueue.dequeue();
			break;

		case 3:
			ticketQueue.print();
			break;

		case 4:
			cout << "Thank you for using my ticketing system. Exiting...";
			break;

		default:
			cout<<"Please try again\n";
			break;

		}

	}while(choice!=4);
}