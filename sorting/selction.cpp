#include <iostream>
using namespace std;
#include <vector>
void selectionsort(vector<int> &arr);
int main() {
    vector<int> arr = {5,4,3,2,1};
    selectionsort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }
      cout <<endl; 
}

  void selectionsort(vector <int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;
       for (int j = i+1; j < n; j++)
       {
          if (arr[j]< arr[minindex])
          {
             minindex = j;
          }
          
       }

     swap (arr[i],arr[minindex]) ; 

    }
    
}