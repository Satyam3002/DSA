#include <iostream>
using namespace std;

bool checksorted(int arr[], int size , int index) {
    // Base case 
    if (index >= size - 1)
    {
        return true;
    }

    if (arr[index]>=arr[index-1])
    {
        bool aagekaAns = checksorted(arr,size,index+1);
        return aagekaAns;
    }

    else {
        return false;
    }
    
    
}

int main () {
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int index = 1;

    bool issorted = checksorted(arr,size,index);

    if (issorted) {
        cout << "array is sorted" ;

    }

    else {
        cout << "array is not sorted" ;
    }
}