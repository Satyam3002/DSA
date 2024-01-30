#include <iostream> 
using namespace std;

int findoddoccurence(int arr[],int n);

int main()
{
    int arr[]={10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n = 13;
    int ans =  findoddoccurence(arr,n);
    cout<<ans;
}

int findoddoccurence(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s +(e-s)/2;
    while (s<=e)
    {
        if (s==e)
        {
            return s;
        }
        
        if (mid & 1)
        {
            if (arr[mid-1]==arr[mid])
            {
                s=mid+1;
            }

            else {
                e = mid-1;
            }
            
        }
        else {
            if (arr[mid]==arr[mid+1])
            {
                s = mid +2;
            }
          else {
            e = mid;
          }  
            
        }
        mid = s +(e-s)/2;
    }
    
    return -1;

}
