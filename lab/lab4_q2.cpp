#include <iostream>
using namespace std;

struct Node{
	int priorty;
	string value;
	Node* left;
	Node* right;

	Node(int p, string s){
		priorty = p;
		value = s;
		left = nullptr;
		right = nullptr;
	}
};



class PriortyQueueBST{
	private:
		Node* root;

		Node* insert(Node* node, int priorty, string value){
			if(node == nullptr){
				return new Node(priorty, value);
			}
			if(priorty < node->priorty){
				node->left = insert(node->left, priorty, value);
			}else{
				node->right = insert(node->right, priorty, value);
			}

			return node;
		}

		Node* findMin(Node* node){
			while(node && node->left){
				node = node->left;
			}
			return node;
		}

		Node* deleteMin(Node* node){
			if (node == nullptr) return node;
			if (node->left == nullptr){
				Node* temp = node->right;
				cout << "Deleted element with highest priorty: (" << node->priorty << ", " << node->value << ")" << endl;
				delete node;
				return temp;
			}

			node->left = deleteMin(node->left);
			return node;
		}

		bool search(Node* node, string value, int& comparisons){
			if(node == nullptr) {
				comparisons++;
				return false;
			}
			comparisons++;
			if(node->value == value){
				return true;
			}

			return search(node->left, value, comparisons) || search(node->right, value, comparisons);
		}

		void inorder(Node* node){
			if(node){
				inorder(node->left);
				cout << "(" << node->priorty << ", " << node->value << ") ";
				inorder(node->right);
			}
			cout<<endl;
		}

	public:
		PriortyQueueBST(){
			root = nullptr;
		}

		void insert(int priorty, string value){
			root = insert(root, priorty, value);
			cout << "Inserted (" << priorty << ", " << value << ")" << endl;
		}

		void deleteHighestPriorty(){
			if(root == nullptr){
				cout << "The Priorty Queue is empty..." << endl;
				return;
			}

			root = deleteMin(root);
		}

		void search(string value){
			int comparisons = 0;
			bool found = search(root, value, comparisons);
			if(found){
				cout << "Found: " <<  value << " with " << comparisons << " comparisons." << endl;
			}else{
				cout << value << " not found. Comparisons made: " << comparisons << endl;
			}
		}

		void display(){
			cout << "InOrder Traversal: ";
			inorder(root);
			cout<< endl;
		}
};


int main(){
	PriortyQueueBST pq;

	pq.insert(3, "TASK C");
	pq.insert(1, "TASK A");
	pq.insert(4, "TASK D");
	pq.insert(2, "TASK B");

	pq.display();

	pq.search("TASK B");
	pq.search("TASK X");

	pq.deleteHighestPriorty();
	pq.display();

	return 0;
}
