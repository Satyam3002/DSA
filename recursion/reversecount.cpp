#include <iostream> 
using namespace std;

void print(int n);

int main() {
    print(5);

    return 0;
}


void print(int n) {
    if (n == 1) {
        cout << 1 << " ";
        return;
    }  
   
   cout << n << " ";  // TAIL RECURSION coz we are calling it after printing the values
    print(n - 1);  // if we use recursion function before printing it then it is HEAD RECURSION

       cout << n << " ";
}
