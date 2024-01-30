#include <iostream>
using namespace std;

void findsubsequences(string str, string output, int index ) {

    if (index >=str.length())
    {
        cout <<output <<endl;
        return;
    }

    char ch = str[index];

    findsubsequences(str,output,index+1);

    output.push_back(ch);
    findsubsequences(str,output,index+1);
    
}

int main () {
    string str = "abc";
    string output = "";
    int index = 0;
    findsubsequences(str,output,index);

}

