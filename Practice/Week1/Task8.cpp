//Create a simple calculator application.
// The user will enter two numbers, and the application will perform calculation using 4 basic operations.

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;

    cout<<"Addition a+b : "<<a+b<<endl;
    cout<<"Multiplication a*b : "<<a*b<<endl;
    cout<<"Division a/b : "<<a/b<<endl;
    cout<<"Substraction a-b : "<<a-b<<endl;

}
