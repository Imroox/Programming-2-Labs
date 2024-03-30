//Write a function to duplicate the value of a number – using passing parameter by reference.

#include <iostream>
using namespace std;

void duplicate_value(int &num){
    num=num*num;

}



int main() {
    int number=4;

    duplicate_value(number);
    cout<<number;

}