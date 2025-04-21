#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;


struct node{
int data;
int height;
node* left;
node* right;

node(int val) : data(val), height(1), left(nullptr), right(nullptr) {}
node(int val, int h, node* l, node* r) : data(val), height(h), left(l), right(r) {}

};

struct AVL{

node* root;

AVL() : root(nullptr) {}

int getHeight(node* root) {
return root? root->height : 0;
}


int bFactor(node* root){
return root? getHeight(root->left) - getHeight(root->right) : 0 ;
}


node* rotateR(node* y){
    node* x = y->left;
    y->left = x->right;
    x->right = y;
        y->height = 1 + max(getHeight(y->left), getHeight(y->right));
        x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    return x;
}

node* rotateL(node* y){
node* x = y->right;
y->right = x->left;
x->left = y;
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
return x;
}



node* insert(node* root, int key){

if(!root){
return new node(key);
}
else if ( root->data > key ){
  root->left = insert(root->left, key);
}
else if ( root->data < key ){
  root->right = insert(root->right, key);
}


root->height = 1 + max(getHeight(root->left), getHeight(root->right) );

int balance = bFactor(root);


if (balance > 1 && key < root->left->data) {
root = rotateR(root);
}

else if (balance > 1 && key > root->left->data) {
root->left = rotateL(root->left);
root = rotateR(root);
}

else if (balance < -1 && key > root->right->data) {
root = rotateL(root);
}

else if (balance < -1 && key < root->right->data) {
root->right = rotateR(root->right);
root = rotateL(root);
}

return root;

}


node* remove(node* root, int key){

if(!root) return nullptr;
else if (key < root->data){
root->left = remove(root->left, key);
}
else if ( key > root->data){
root->right = remove(root->right, key);
}
else {
    if(!root->right || !root->left){
    return root->left ? root->left : root->right;
    }
    else {
    node* temp = root->right;
    while(temp->left) { temp = temp->left; }
    root->data = temp->data;
    root->right = remove(root->right, temp->data);
    }
}

root->height = 1 + max(getHeight(root->left), getHeight(root->right) );

int balance = bFactor(root);


if (balance > 1 && bFactor(root->left) >=0 ) {
root = rotateR(root);
}

else if (balance > 1 && bFactor(root->left) < 0) {
root->left = rotateL(root->left);
root = rotateR(root);
}

else if (balance < -1 && bFactor(root->right) < 0) {
root = rotateL(root);
}

else if (balance < -1 && bFactor(root->right) >=0) {
root->right = rotateR(root->right);
root = rotateL(root);
}

return root;
}



bool search(node* root, int key){
 if(!root) return false;
 else if ( root->data == key) {
   return true;
   }
 else if ( key < root->data){
   return search(root->left, key);
 }
 else {
   return search(root->right, key); 
 }
}





void inorder(node* root){
if(!root) return;
inorder(root->left);
cout << root->data << " -> ";
inorder(root->right);
}

void fillUp(node* root, vector<int> & vec){
 if(!root) return;
 fillUp(root->left, vec);
 vec.push_back(root->data);
 fillUp(root->right, vec);
}


void Insert(int val){
  root = insert(root, val);
}

void Remove(int val){
  root = remove(root, val);
}

void Search(int val){
  if (search(root, val) ){
   cout << "YES\n"; }
  else {
   cout << "NO\n";
  }
}

void FillUp(vector<int> & vec){
fillUp(root, vec);
}

void Show(){
inorder(root);
cout << "END\n";
}

};






void insertionSort(vector<int> &vec){
for(int i = 1; i < vec.size(); i++){
   int key = vec[i];
   int j = i-1;
   while(j >= 0 && vec[j] > key ){
   vec[j+1] = vec[j];
   j--;
   }
   vec[j+1] = key;
}
}


void avlSort(vector<int> &vec){
AVL temp;
for(int i = 0; i < vec.size(); i++){
temp.Insert(vec[i]);
}

vec.clear();

temp.FillUp(vec);
}


int main(){

    int n = 1;
    while(n != 0){

        cout << "Enter: ";
        cin >> n;

        vector<int> vec1(n);
        vector<int> vec2(n);

        for(int i = 0; i < n; i++){
            vec1[i] = i+1;
        }

        srand(time(0));
        for(int i = 0; i < n-1; i++){
            int j = rand() % ( i+1 );
            swap(vec1[i], vec1[j]);
        }

        for(int i = 0; i < n; i++){
            vec2[i] = vec1[i];
        }

         
        clock_t start1 = clock();
        insertionSort(vec1);
        clock_t end1 = clock();


        clock_t start2 = clock();
        avlSort(vec2);
        clock_t end2 = clock();


        cout << "Insertion Sort Time: " << 1000 * (double(end1 - start1) / CLOCKS_PER_SEC) << "ms\n";
        cout << "AVL Sort Time: " << 1000 * (double(end2 - start2) / CLOCKS_PER_SEC )<< "ms\n";

    }
    return 0;
}