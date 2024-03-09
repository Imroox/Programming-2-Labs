//Write a C++ program to swap the values of two variables without using third variable.


#include <iostream>
using namespace std;

int main() {

    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;

    cout<<"Before swap: "<<"a = "<<a<<" b = "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swap: "<<"a = "<<a<<" b = "<<b<<endl;

}
