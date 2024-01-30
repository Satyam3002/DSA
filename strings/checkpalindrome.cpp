#include <iostream>
using namespace std;
#include <cstring>

bool checkpalindrome(char ch[], int n);

bool checkpalindrome(char ch[], int n)
{
    int i=0;
    int j = n-1;

    while (i<=j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;

        }
        else {
            // characters are not matching
            return false;
        }
    }
    
    return true;
}


int main()
{
    char ch[100];
    cin.getline(ch,100);
    int len = strlen(ch);
    
    bool ispalindrome = checkpalindrome(ch,len);
     
    if (ispalindrome)
    {
      cout<< "valid palindrome" << endl;
    }
    else {
        cout << " not valid palindrome" << endl;
    }
}