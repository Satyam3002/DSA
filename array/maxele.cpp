#include <iostream>
#include <limits.h>
using namespace std;

int findmax(int arr[][4],int row, int col);

int main()
{
     int arr[3][4]={
      {1,2,3,4},
      {5,6,7,8},
      {9,10,1,11} 
  };
    int row = 3;
    int col = 4;

    int target=11;

    cout<<"Printing the max No. :" << findmax(arr,row,col);
}

 int findmax(int arr[][4],int row, int col)
 {
    int maxans= INT_MIN ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col;  j++)
        {
            if (arr[i][j]> maxans)
            {
                maxans=arr[i][j];
            }
            
        }
        
    }
    return maxans; 
 }