#include <iostream>
#include <limits.h>
using namespace std;

int rowwisesum(int arr[][4], int row , int col);


int main()
{
     int arr[3][4]={
      {1,2,3,4},
      {5,6,7,8},
      {9,10,1,11} 
  };
    int row = 3;
    int col = 4;
    cout<<"sum of array" <<rowwisesum(arr,row,col);


}


int rowwisesum(int arr[][4], int row , int col)
{
   for (int i = 0; i < row ; i++)
   {
    int sum=0;
    for (int j = 0; j < col; j++)
    {
        /* code */
        sum =  sum + arr[i][j];
    }
       cout << sum << endl;
   }
   
}


