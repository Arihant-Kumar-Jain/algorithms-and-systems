/*
#include <iostream>
using namespace std;

void helloworld(){
    int a{};
    cin >> a;
    cout<< "hello\n";
    
}

int add_two(int x, int y) {
    
    return x + y;
}

int main() {
    
    int b{};
    cin >> b;
    cout << "Hello, World!\n";
    helloworld();
    cout << add_two( b, b*2);
    return 0;
}
*/



//nested function not allowed in c++

//metasyntatic variables like moo goo boo foo etc are meaningless, used as placeholder names

//return value functions can can be used to cpp by return x; function




//FROM LEARNCPP.Com PASTED
/*
#include <iostream>

int getValueFromUser()
{
     std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    int num { getValueFromUser() };

    printDouble(num);

    return 0;
}

 
 
 
 

#include <iostream>
using namespace std;

int main()
    {
    
    int a{};
    cout<<"Enter a number: ";
    cin >> a;
    
    if (a>0) {
        cout << "the entered number is positive\n";
    }
    
    else if (a<0) {
        
        cout <<"the entered number is negative\n";
    }
    
    else {
        cout<<"the entered number is zero\n";
    }
}

 
 
 
//FOLLOWING CODE FOR SUM OF EVEN NUMBERS
#include <iostream>
using namespace std;
 
int main() {
    
    int value_entered {};
    cout << "ENTER A NUMBER: ";
    cin >> value_entered;
    
    int i{};
    int sum{};
    
    while (i<=value_entered) {
        
        sum = sum + i;
        i = i+2;
        
    }
    
    cout << "The value of sum of even numbers upto the selected number is: " << sum << endl;
}

 
 
 
 
 
 

//FOLLOWING CODE FOR PRIME NUMBER CHECK
#include <iostream>
using namespace std;

int main (){
    
    int user_input{};
    cout<<"Enter a number to check if prime or not: ";
    cin >> user_input;
    
    int  i = 2 ;
    while (i<user_input){
        
        if (user_input%i == 0){
            cout<<"The number is not prime for "<< i <<endl;
            
        }
        
        else {
            
            cout<<"The number is prime for " << i << endl;
        }
        
        i = i+1;
    }
    
    
}
*/






/*
 //pattern 1
#include <iostream>
using namespace std;

int main(){
    int n{};
    cin >> n;
    
    int i=1;
    
    
    while (i<=n){
        
        int j=1;
        while(j<=n){
            cout << "*";
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}
*/








/*
 //Pattern2
#include <iostream>
using namespace std;

int main () {
    
    int n{};
    cout<<"Enter a number: ";
    cin >> n;
    
    int i =1;
    
    while (i<=n){
        int j = 1;
        while (j<=i){
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/








/*
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    int count = 1;
    
    while (i<=n){
        
        int j = 1;
        
        while (j<=i) {
            cout << count << " ";
            j = j + 1;
                       
        }
        
        cout<<endl;
        i = i+1;
        count = i;
    }
    
    
}
*/









/*
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int i = 1;
    
    while (i<=n) {
        
        int j = 1;
        while (j<=i){
            
            cout << i-j+1;
            j = j+1;
            
        }
        i = i+1;
        cout << endl;
        
    }
    
}
*/






/*
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int i = 1;
    
    while(i<=n){
        
        int j =1;
        while(j<=n){
            char ch = 'A' + i -1;
            cout<<ch;
            j = j+1;
        }
        cout << endl;
        i = i+1;
        
    }
}
*/




/*
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int i = 1;
    
    while (i<=n){
        
        int j =1;
        
        while (j <= n) {
            
            if (i+j>=n+1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
            
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        
    }
    
    
}
*/





/*
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    
    while(i<=n){
        
        int j = 1;
        
        while (j<=(2*n-1)){
            
            if (j==n) {
                cout << i << " ";
            }
            else if (j<n){
                if (n-j-i<0){cout << j + i - n << " ";}
                else {cout << "  ";}
            }
            else if (n+j-i<2*n){
                cout<< 2*n - n - j + i<< " ";
            }
            else {cout<<" ";}
            
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
}

*/






/*
//FIBONACCI
#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin>>n;
    
    int a= 0;
    int b = 1;
    
    for (int i = 0; i<=n; i++ ) {
        
        int sum = a + b ;
        cout << sum << " ";
        
        a=b;
        b=sum;
    }
}
*/







//Prime check (with break and for loop)

/*
#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter a number: ";
    int n;
    cin>>n;
    
    bool prime = 1;
    
    for (int i = 2; i < n; i++) {
        
        if (n%i==0) {
            prime = 0;
            break;
        }
        
    }
    
    if (prime == 0) {
        
        cout << "The number is not prime"<<endl;
        
    }
    
    else {
        
        cout << "The number is prime"<<endl;
    }
}
*/




//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main () {
//    
//    int n;
//    cin >> n;
//    
//    int i = 0;
//    int number=0;
//    
//    while (n!=0) {
//        
//        int bit = n&1;
//        
//        number = (bit * pow(10, i)) + number;
//        
//        n = n>>1;
//        i += 1;
//    }
//    
//    cout << "answer is " << number << endl;
//}


//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main () {
//    
//    vector<string> first_vector = { "volvo", "bmw", "audi" };
//    
//    
//}

//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//    multiset<int>ms;
//    ms.insert(1);
//    ms.insert(2);
//    ms.insert(2);
//    ms.insert(6);
//    
//    
//    auto it = ms.find(6);
//    cout << *(it) <<endl;
//}

//Recurssion 1
//#include <iostream>
//using namespace std;
//
//void f() {
//    cout<<"1"<<endl;
//    f();
//}
//int main() {
//    f();
//}




































































