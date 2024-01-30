#include <iostream>
using namespace std;

int fibb(int n) {
    if (n==1) {
        return 1;
    }
    if (n== 0) {
        return 0;
    }

    int ans = fibb(n-2) + fibb(n-1);
    return ans;

}

int main() {
    cout << fibb(6)<<endl;
}