#include <iostream>
using namespace std;

int main ()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            for (int k = i; k < n; k++)
            {
                /* code */
                cout<< arr[i] << ", "<< arr[i]<<", "<<arr[k]<<endl;

            }
            
            // cout<<arr[i] <<", "<<arr[j] <<endl;
            /* code */
        }
        
    }
    
}