#include <iostream>
using namespace std;

int firstoccurence(int  arr[],int n,int target);

int main()
{
    int arr[]={10,30,30,40,50,60,70,80,90};
    int n=9;
    int target=70;

    int ansindex= firstoccurence(arr,n,target);

    if (ansindex == -1)
    {
        cout << "element not found" << endl;
    }

    else {
        cout << "Element found at Index: " << firstoccurence <<endl;
    }
    
}

int firstoccurence(int  arr[],int n,int target)
{
    int start =0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans= -1;

    while (start<=end)
    {
        if (arr[mid]== target)
        {
            ans = mid;

            end= mid-1;
        }
        
        else if (target>arr[mid])
        {
          start = mid + 1;
        }
        
        else if (target < arr[mid])
        {
            end =  mid-1;
        }
        mid = (start + end)/2;
    }

    return ans;
    
}