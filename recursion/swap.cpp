#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

// void swapusingRR(int arr[], int s, int e) {
//     if (s > e) {
//         return;
//     }

//     if (s < e) {
//         swap(arr[s], arr[e]);
//         swapusingRR(arr, s + 1, e - 1);
//     }
// }


void reversestring(string&str,int s,int e) {
    if (s>e)
    {
        return;
    }

    if (s<e)
    {
        swap(str[s],str[e]);
        reversestring(str,s+1,e-1);
    }
 
    
}

int main() {
    string str = "abcde" ; 
    int s = 0;
    int e= str.size()-1;

     reversestring(str,s,e);
   

    for (int i = 0; i < e+1; i++) {
        cout << str[i] << " ";
    }

    return 0;
}
