#include <iostream>
using namespace std;
#include <vector>


void print(vector<int>& v);

int main()
{
    vector<int> v;

    print(v);

    cout<<"print"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}

void print(vector<int>& v)
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int d;
        cin>>d;
        v.push_back(d);
    }

    v.clear();
   
}