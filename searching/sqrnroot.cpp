#include <iostream>
using namespace std;

int mysqrt(int x) {
    int s=0;
    int e=x;
    long long int mid = s + (e-s)/2;
    int ans = 0;
    
    while (s<=e)
    {
        if (mid * mid == x)
        {
            return mid;
        }

       else if (mid * mid < x)
       {
        ans = mid;
        s = mid + 1;
       }

       else {
        e = mid- 1;
       }

       mid = s + (e-s)/2;     
    }
      return ans;
}

double myprecison(int x){
    double sqrt = mysqrt(x);
    double step = 0.1;
    {
        double j = sqrt;
        while (j * j<=x)
        {
            sqrt = j;
            j+=step;
        }
        
    }

    return sqrt;
}


int main()
{
    int x = 51;
    double result = myprecison(x);

    cout << result << endl;

    return 0;

}
