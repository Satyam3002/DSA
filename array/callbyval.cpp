#include <iostream>
using namespace std;

// Function forward declaration
void solve(int jaddu);

int main()
{
    int sundari = 100;
    sundari--;
    sundari -= 5;
    solve(sundari);
    cout <<"answer is"<< sundari;
    return 0; // Return 0 to indicate successful program execution
}

void solve(int jaddu)
{
    jaddu--;
    cout << jaddu + 10;
    return;
}
