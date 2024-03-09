//Write a C++ program to check if the number entered by the user is of length 2 or more and if it is odd. If that is the case, print “GOOD NUMBER”. Otherwise, don’t accept this number.


#include <iostream>
using namespace std;

int main() {

    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    if (number>10 and number % 2 != 0){
        cout<<"GOOD NUMBER."<<endl;
    }
    else{
        cout<<"We don't accept this number"<<endl;
    }

}
