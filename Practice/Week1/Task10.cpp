//Write a C++ program to find the third angle of a triangle.


#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter first angle of triangle: "<<endl;
    cin>>a;
    cout<<"Enter second angle of triagnle: "<<endl;
    cin>>b;

    c=180-(a+b);

    cout<<"Third angle of triangle is: "<<c<<endl;
}
