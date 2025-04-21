#include <iostream>
using namespace std;

struct Node{
	int key;
	Node* left;
	Node* right;

	Node(int value){
		key = value;
		left = nullptr;
		right = nullptr;
	}
};

class BST{
	private:
		Node* root;
		
		Node* insert(Node* node, int key, int &comparisions){
			if(node == nullptr){
				comparisions++;
				return new Node(key);
			}

			comparisions++;
			if(key<node->key){
				node->left= insert(node->left, key, comparisions);
			}else{
				node->right= insert(node->right, key, comparisions);
			}

			return node;
		}

		Node* search(Node* node, int key, int &comparisions){
			if(node == nullptr || node->key == key){
				comparisions++;
				return node;
			}

			comparisions++;

			if(key<node->key){
				return search(node->left, key, comparisions);
			}else{
				return search(node->right, key, comparisions);
			}
		}

		Node* deleteNode(Node* root, int key, int& comparisions){
			if(root == nullptr){
				comparisions++;
				return root;
			}

			comparisions++;
			if(key<root->key){
				root->left = deleteNode(root->left, key, comparisions);
			}else if(key>root->key){
				root->right = deleteNode(root->right, key, comparisions);
			}else{
				if(root->left == nullptr){
					Node* temp = root->right;
					delete root;
					return temp;
				}else if(root->right == nullptr){
					Node* temp = root->left;
					delete root;
					return temp;
				}

				Node* temp = minValNode(root->right);
				root->key = temp->key;
				root->right = deleteNode(root->right, temp->key, comparisions);
			}
			return root;
		}

		Node* minValNode(Node* node){
			Node* current = node;
			while(current && current->left != nullptr){
				current = current->left;
			}
			return current;
		}

	
	public:
		BST(){
			root = nullptr;
		}

		void insert(int key){
			int comparisions = 0;
			root = insert(root, key, comparisions);
			cout << "Inserted " << key << " with " << comparisions << " comparisions."<< endl;
		}

		void search(int key){
			int comparisions = 0;
			Node* result = search(root, key, comparisions);
			if(result){
				cout << "Found " << key << " with " << comparisions << " comparisions." << endl;;
			}else{
				cout << key << " not found. Comparisions made: " << comparisions << endl;;
			}
		}

		void deleteKey(int key){
			int comparisions = 0;
			root = deleteNode(root, key, comparisions);
			cout << "Deleted " << key << " with " << comparisions << " comparisions." << endl;
		}
};


int main(){
	BST tree;
	tree.insert(50);
	tree.insert(30);
	tree.insert(70);
	tree.insert(20);
	tree.insert(40);
	tree.insert(60);
	tree.insert(80);

	tree.search(60);
	tree.search(25);

	tree.deleteKey(20);

	return 0;

}
