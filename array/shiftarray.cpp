#include <iostream>
using namespace std;

void shiftarray(int arr[], int n);

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
   
   shiftarray(arr,n);
   for (int i = 0; i < n; i++)
   {
     cout<<arr[i]<<", ";
    /* code */
   }
   
}

void shiftarray(int arr[], int n)
{
    int i=0;
    int temp= arr[n-1];

    for (int i = n-1; i>=1  ; i--)
    {
        /* code */
        arr[i]= arr[i-1];
    }
    
    arr[0]=temp;
}