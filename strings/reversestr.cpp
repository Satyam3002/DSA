#include <iostream>
using namespace std;
#include <cstring>
void reversestring(char ch[], int n);

int main()
{
    char ch[100];

    cin.getline(ch,100);

     int len = strlen(ch);
      cout << "BEFORE : " << ch <<endl;
      reversestring(ch,len);
   cout << "AFTER : " << ch << endl;
}

void reversestring(char ch[], int n)
{
    int i = 0;
    int j= n-1;

    while (i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    
}