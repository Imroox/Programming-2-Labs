//Write a program in C++ to find the sum of the digits of a given number.

#include <iostream>
using namespace std;

int main() {
    int sum=0, num, numOfDigits;

    cout<<"Enter a number: "<<endl;
    cin>>num;

    while(num>0) {
        numOfDigits = num % 10;
        sum = sum + numOfDigits;
        num = num / 10;
    }

    cout<<"Sum of digits for this number is: "<<sum<<endl;
}
