#include <iostream>
using namespace std;
//  void lastoccurLTR(string&s,char x,int i,int&ans) {
//     //basecase
//     if (i >= s.size())
//     {
//         return;
//     }

//     if (s[i]== x)
//     {
//         ans = i;
//     }
//     lastoccurLTR(s,x,i+1,ans);
    
// }

 void lastoccurRTL(string&s,char x,int i,int&ans) {
    //basecase
    if (i<0)
    {
        return;
    }

    if (s[i]== x)
    {
        ans = i;
        return;
    }

    lastoccurRTL(s,x,i-1,ans);
    
 }


int main() {
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = -1;
    lastoccurRTL(s,x,s.size()-1,ans);

    cout <<ans;
    
    return 0;
    
}

