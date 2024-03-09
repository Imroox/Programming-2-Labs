//Write a C++ program to swap the values of 2 variables.//


#include <iostream>
using namespace std;

int main() {
    int temp,a,b;
    cout<<"Enter two variables: "<<endl;
    cin>>a>>b;
    cout<<"Before swap: "<<"a="<<a<<" b="<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swap: "<<"a="<<a<<" b="<<b<<endl;

}

