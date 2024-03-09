//Write a C++ program that reads an integer and check the specified range where it belongs (0-20;21-50;51-80;).
//Print an error message if the number is negative or greater than 80.

#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    if (number>=0 and number<=20){
        cout<<"Number is in range from 0-20."<<endl;
    }
    else if (number>=21 and number <=50){
        cout<<"Number is in range from 21-50."<<endl;
    }
    else if ( number>=51 and number <=80){
        cout<<"Number is in range from 51-80."<<endl;
    }
    else{
        cout<<"Number is negative or greater than 80."<<endl;
    }
}

