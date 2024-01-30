#include <iostream>
using namespace std;

// int sortzeroone(int arr[], int n);


void sortzeroone(int arr[], int n)
{
  int zerocount=0;
  int onecount=0;

  for (int i = 0; i < n ; i++)
  {
    if (arr[i]==0)
    {
        zerocount++;

    } 

   else if (arr[i]==1)
    {
        onecount++;
    }
      
  } 

  int i;
for ( int i = 0; i < zerocount; i++)
{
    /* code */
    arr[i]=0;
}

for (int j = zerocount; j<n; j++)
{
    /* code */
    arr[j]=1;
}

}


int main()

{
    int arr[]= {0,1,0,0,1,1,0,1};
    int n=8;

    sortzeroone(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<", ";
        /* code */
    }
    

}