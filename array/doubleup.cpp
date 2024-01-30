#include <iostream>
using namespace std;

int main()
{
    int i=0;
    int arr[5];
    

    for (int i = 0; i < 5; i++)
    {
        cout<<"enter value at index"<<i<<endl;
        cin>>arr[i];
    }


    
    
    cout<<" required array is "<<endl;
    for (int i = 0; i < 5; i++)
    {
       
        cout<< 2* arr[i] <<" ";
    }
    
}
