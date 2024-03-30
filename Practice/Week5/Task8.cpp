//Write a function in C++ to check if a year is a leap year or not.
//Note: Leap year perfectly divisible by 400;
//- if not divisible by 400 and divisible by 100 it is NOT a leap year;
//- if not divisible by 100 but divisible by 4 it IS a leap year.

#include <iostream>
using namespace std;

bool is_leap(int year){
    if (year%400 == 0){
        return true;
    }
    else if (year % 400 !=0 and year % 100 == 0){
        return false;
    }
    else if (year % 100 != 0 and year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}
int main() {

    int year;
    cout << "Enter a year: ";
    cin >> year;

    cout<<is_leap(year);


    return 0;
}