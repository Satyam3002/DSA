#include <iostream>
using namespace std;

int findlength(char ch[], int size);

int main () {
    char ch[100];
    cin.getline(ch,100);

    int len = findlength(ch ,100);

    cout<<"length of string is "<<len << endl;
}

int findlength(char ch[], int size)
{
    int length = 0;
    for (int i = 0; i < size; i++)
    {
        if (ch[i]=='\0')
        {
            /* code */
            break;
        }

        else {
            length++;
        }
        
    }


   /*
   int index = 0
   whiile (ch[index] != '\0')
   {
    index++;
   }*/ 
    
    return length;
}