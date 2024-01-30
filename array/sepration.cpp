#include <iostream>
using namespace std;

int sepration(int arr[],int n);

int main()
{
    int arr[]={4,-1,5,-6,-8,44};
    int n = 7;

     sepration(arr,n);

     cout<<"printing the array"<<endl;
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}

int  sepration(int arr[],int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    
    {
        if (arr[i]<0)
        {
            
            swap(arr[i],arr[j]);
            j++;
        }
    
    }
    
}