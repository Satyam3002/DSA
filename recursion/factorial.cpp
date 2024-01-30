#include <iostream>
using namespace std;

int factr(int n) {
    if (n==1) {
        return 1;
    }

    if (n==0) {
        return 1;
    }

   // int recursionans = factr(n-1);

    int finalans= n * factr(n-1);

    return finalans;
}

int main() {
    cout << factr(6)<<endl;
}