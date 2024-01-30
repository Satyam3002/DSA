#include <iostream>
using namespace std;


int getunique(int arr[], int n);


int main()
{
  int arr[5]={1,2,5,5,2};
  int n = 5;
  int finalAns = getunique(arr, n);
  cout<<"Final Answer is: "<< finalAns << endl;
}

int getunique(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
        /* code */
    }
    
    return ans;
}
