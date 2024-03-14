//. Write a C++ program to check whether a given number is a power of two or not.

#include<cmath>
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    if (num<=0){
        cout<<"This number cannot be a power of 2."<<endl;
    }
    else if ((ceil(log2(num)) == floor(log2(num)))){
        cout<<"This number is a power of 2."<<endl;

    }
    else{
        cout<<"This number is not a power of 2."<<endl;
    }

}


