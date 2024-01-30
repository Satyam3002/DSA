#include <iostream>
using namespace std;

int  main()
{
    
    int arr[6]={1,2,3,4,6,7};

   for (int i = 0; i < 6; i++)
   {
      /* code */
       arr[i]=arr[6-i];

   }
   

   for (int i = 0; i < 6; i++)
   {
    /* code */
    cout<<arr[i]<<" ";
   }
   
}