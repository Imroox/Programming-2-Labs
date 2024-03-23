//Write a C++ program to print all numbers  from 1 to 100, which divided by
// specified number have a remainder equal to 3.

#include <iostream>
using namespace std;

int main() {
   int number;
   cout<<"Enter a number: "<<endl;
   cin>>number;

    for (int i = 0; i <=100; i++) {
        if (i%number==3){
            cout<<i<<endl;
        }
    }
}
