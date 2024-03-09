//Write a C++ program to ask user to enter length and width of rectangle. Find area of that rectangle.//


#include <iostream>
using namespace std;

int main() {

    int area,length,width;
    cout<<"Enter length: "<<endl;
    cin>>length;
    cout<<"Enter width: "<<endl;
    cin>>width;
    area=length*width;

    cout<<"Area of rectangle is: "<<area<<endl;

}

