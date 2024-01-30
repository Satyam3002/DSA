#include <iostream>
using namespace std;

void merge(int arr[],int s,int e) {
       int mid = (s+e)/2;

       int lenLeft = mid - s + 1;
       int lenRight = e-mid;

       //create left and right array
       int *left = new int[lenLeft];
       int *right  = new int[lenRight];

     //copy values from original array to left array
        int k=s;

      //k -> starting index of left array values in original array
        for (int  i = 0; i < lenLeft; i++)
        {
            left[i]=arr[k];
            k++;
        }

        //copy values from original array to right array
        k = mid+1;
        for (int  i = 0; i < lenRight; i++)
        {
            right[i] = arr[k];
            k++;
        }

        //actual merge logic here
        //left array is already sorted
        //right array is already sorted

        int leftIndex =0;
        int rightindex =0;
        
        //yahi pr galti karte h log

        int mainArrayIndex = s; 

        while (leftIndex<lenLeft && rightindex<lenRight)
        {
            if (left[leftIndex] < right[rightindex])
            {
                arr[mainArrayIndex] = left[leftIndex];
                mainArrayIndex++;
                leftIndex++;
            }

            else {
                arr[mainArrayIndex] = right[rightindex];
                mainArrayIndex++;
                rightindex++;
            }
            
    }
            //2more cases

             //1 case -> left array exhaust but right array me element abhi bhi bache hai
         while (rightindex<lenRight)
         {
            arr[mainArrayIndex] = right[rightindex];
            mainArrayIndex++;
            rightindex++;
         }
             //2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
         while (leftIndex<lenLeft)
         {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
         }
         

         //1more step

         delete[] left;
         delete[] right;

}

void mergesort(int arr[],int s,int e) {
    if(s>e) {
        //invalid array
      return;
    }

    if(s==e) {
        //single element
        return;
    }

    int mid = (s+e)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}

     


int main() {
    int arr[]={2,1,6,9,4,5};
    int size = 6;
    int s=0;
    int e = size-1;

    mergesort(arr,s,e);

    cout<<"After merge sort:" <<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] <<" ";
    }
    
    cout <<endl;

    return 0;

}