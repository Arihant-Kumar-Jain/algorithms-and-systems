#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int val): data(val), next(nullptr){}

    public:
    Node(int val, Node* next1): data(val), next(next1){}
};


Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}




int main(){
    cout << "jfnk" <<"\n";
}