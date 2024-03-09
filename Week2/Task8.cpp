//Write a C++  Program to find the maximum between three numbers.

#include <iostream>
using namespace std;

int main() {
    int number1,number2,number3;
    cout<<"Enter three numbers: "<<endl;
    cin>>number1>>number2>>number3;
    if (number1>number2 and number1>number3){
        cout<<"The max number is: "<<number1<<endl;
    }
    else if (number2>number1 and number2 > number3){
        cout<<"The max number is: "<<number2<<endl;
    }
    else{
        cout<<"The max number is: "<<number3<<endl;
    }

}
