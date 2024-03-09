//Write a C++ program to convert an even number into the nearest next odd number.



#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;

    if (number % 2 == 0){
        cout<<"The next nearest odd number is: "<<number+1<<endl;
    }
    else{
        cout<<"This number is already odd."<<endl;
    }

}
