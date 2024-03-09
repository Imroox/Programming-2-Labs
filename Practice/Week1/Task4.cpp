//Write a C++ program to convert 6 hours 40 minutes into seconds//


#include <iostream>
using namespace std;

int main() {
    int hours=6;
    int minutes=40;
    int seconds;

    seconds=hours*3600+minutes*60;

    cout<<"6 hours and 40 minutes in seconds: "<<seconds<<endl;

}

