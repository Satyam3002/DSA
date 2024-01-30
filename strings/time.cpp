#include <iostream>
using namespace std;
#include <cstring> 

int main() {
    string newtime;
 string s = "12:05:45PM" ;
   string hours = s.substr(0,2);
   string minute = s.substr(3,2);
   string second = s.substr(6,2);
   string daynight = s.substr (8,2);

  if (s[8]=='P' && hours != "12") {
       int hours_int = stoi(hours); // Convert string to integer
    hours_int = (hours_int + 12) % 24; // Add 12 and handle rollover

    // Convert back to string
    hours = (hours_int < 10) ? "0" + to_string(hours_int) : to_string(hours_int);

     newtime = hours + ":" + minute + ":" + second + ":" + daynight;
    cout << newtime << endl;

    //cout << hours << ":"<< minute << ":" << second << ":" << daynight << endl;
    
    
     
  }
   else if (hours =="12") {
       
       cout << s << endl;
   }
   
    
}