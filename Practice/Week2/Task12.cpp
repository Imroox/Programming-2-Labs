//Write a C++ program to check if an entered year is a leap year.
//Hint: For a year to be leap, it is either divisible by 4 and not 100, or it is just divisible by 400

#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"Enter a year: "<<endl;
    cin>>year;

    if (year % 4 == 0 and not year % 100 == 0){
        cout<<"It is a leap year."<<endl;
    }
    else if (year % 400 == 0){
        cout<<"It is a leap year."<<endl;
    }
    else{
        cout<<"It is not a leap year."<<endl;
    }

}

