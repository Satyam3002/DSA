#include <iostream>
using namespace std;

int maximizethecuts(int n, int x,int y,int z) {
    if (n==0)
    {
        return 0;
    }

    if (n<0)
    {
        return INT16_MIN;
    }
    
    int option1 = 1 + maximizethecuts(n-x,x,y,z);
    int option2 = 1 + maximizethecuts(n-y,x,y,z);
    int option3 = 1 + maximizethecuts(n-z,x,y,z);

    int finalans = max(option1, max(option2,option3));
    return finalans;
    
}


int main() {
  int n = 5;
  int x =5, y=3, z= 2;

  int ans = maximizethecuts(n,x,y,z);
   cout << ans;
   
    
}