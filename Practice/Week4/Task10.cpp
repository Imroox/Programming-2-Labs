//Write a program in C++ to find the last prime number that occurs before the entered number.

#include <iostream>
using namespace std;

int main() {
    int number, counter=0;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    for (int i=number-1; i>=1; i--){
        for (int j=2; j<i; j++){
            if (i%j==0)
                counter++;
        }
        if (counter==0){
            cout<<i<<" is the last prime number."<<endl;
            break;
        }
        counter=0;
    }
}
