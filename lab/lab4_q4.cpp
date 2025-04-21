#include <iostream>
using namespace std;

struct Node{
	int key;
	Node* left;
	Node* right;
	int height;

	Node(int k){
		key = k;
		left = right = nullptr;
		height = 1;
	}
};

int height(Node* node){
	return node ? node->height : 0;
}

int getBalance(Node* node){
	return node ? (height(node->left) - height(node->right)) : 0;
}

int max(int a, int b){
	return (a>b)?a:b;
}

Node* rightRotate(Node* x){
	Node* y = x->left;
	Node* T1 = y->right;
	
	y->right = x;
	x->right = T1;

	x->height = max(height(x->left), height(x->right)) + 1;
	y->height = max(height(y->left), height(y->right)) + 1;
}


Node* leftRotate(Node* x){
	Node* y = x->right;
	Node* T1 = y->left;

	y->left = x;
	x->left = T1;

	x->height = max(height(x->left), height(x->right)) + 1;
	y->height = max(height(y->left), height(y->right)) + 1;
}

Node* insert(Node* node, int key){
	if(!node) return new Node(key);
	if(key<node->key){
		node->left =  insert(node->left, key);
	}else if(key>node->key){
		node->right =  insert(node->right, key);
	}else{
		return node;
	}

	node->height = 1 + max(height(node->left), height(node->right));
	int balance = getBalance(root);

	if(balance>1 && key<node->left->key){
		return rightRotate(node);
	}
	if(balance<-1 && key>node->right->key){
		return leftRotate(node);
	}
	if(balance>1 && key>node->left->key){
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}
	if(balance<-1 && key<node->right->key){
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;
}


Node* minValNode(Node* node){
	Node* current = node;
	while(current->left){
		current = current->left;
	}
	return current;
}


Node* deleteNode(Node* node, int key){
	if(!node) return node;

	if(key<node->key){
		root->left = deleteNode(node->left, key);
	
	}else if(key>node->key){
		root->right = deleteNode(node->right, key);
	}else{
		if(node->left == nullptr){
			Node* temp = node->right;
			delete node;
			return temp;
		}

		if(node->right == nullptr){
			Node* temp = node->left;
			delete node;
			return temp;
		}

		Node* temp = minValNode(node->right);
		node->key = temp->key;
		node->right = deleteNode(node->right, temp->key);
	}
	
	if(!node) return node;


	root->height = 1 + max(height(node->left), height(node->right));
	int balance = getBalance(node);

	if(balance>1 && getBalance(node->left)>=0){
		return rightRotate(node);
	}
	if(balance<-1 && getBalance(node->right)<=0){
		return leftRotate(node);
	}
	if(balance>1 && getBalance(node->left)<0){
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}
	if(balance<-1 && getBalance(node->right)>0){
		node->right = rightRotate(node->right);
		return rightRotate(node);
	}

	return node;
}


bool search(Node* node, int key, &comparisons){
	if(!node){
		comparisons++;
		return false;
	}

	comparisons++;
	if(key == node->key) return true;
	else if(key<node->key){
		return search(node->left, key, comparisons);
	}else{
		return search(node->right, key, comparisons);
	}
}

int main(){
	Node* root = nullptr;
	

}


