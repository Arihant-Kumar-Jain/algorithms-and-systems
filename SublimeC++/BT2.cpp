#include <iostream>
#include <vector>
using namespace std;

struct Node{

	int data;

	Node* left;
	Node* right;

	Node(int val): data(val), left(nullptr), right(nullptr) {}
};


//for preorder:----
void preOrder(vector<int> &arr, Node* root){

	if(root == nullptr){
		return;
	}

	//preorder is root left right
	arr.push_back(root->data);
	preOrder(arr, root->left);
	preOrder(arr, root->right);
}


vector<int> preorder(Node* root){
	vector<int> arr;
	preOrder(arr, root);
	return arr;
}

int main(){

	//creating a sample tree for checking my code:--
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(6);


	vector<int> ans = preorder(root);

	for(auto it: ans){
		cout << it << " ";
	}
}