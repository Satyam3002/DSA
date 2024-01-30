#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v);


int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
     
    //  v.pop_back (); it will delte element from end of an array
    print(v);
}

void print(vector<int>v)
{
    int size= v.size();
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<endl;
        /* code */
    }
    

}