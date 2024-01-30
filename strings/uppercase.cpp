#include <iostream>
using namespace std;
#include <cstring>

void converttouppercase(char ch[], int n);

int main()
{
    char ch[100];

    cin.getline(ch,100);
    cout << "BEFORE : " << ch <<endl;
    converttouppercase(ch , 100);
    cout << endl << "AFTER : " << ch << endl;

  
}

 void converttouppercase(char ch[], int n)
 {
    int index = 0;
    while (ch[index] != '\0')
    {
        char currentchar = ch[index];

        // lower case to upper case

        if (currentchar >= 'a' && currentchar <= 'z')
        {
            ch[index] = currentchar - 'a' + 'A';
        }

             index ++;
    }
    
 }
