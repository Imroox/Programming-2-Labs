//Write a C++ program that serves a temperature calculator (converts Fahrenheit into Celsius, vice versa).//


#include <iostream>
using namespace std;

int main() {
    double  temp1, temp2;
    double celsResult, fahResult;
    cout<< "Enter temperature in Celsius to convert it to Fahrenheit: "<<endl;
    cin >> temp1;
    fahResult  = ( (9.0/5.0) * temp1) + 32 ;
    cout << "Converted temperature " << temp1 << " from Celsius to Fahrenheit is " <<fahResult*100/100 << endl;
    cout << "Enter temperature in Fahrenheit to convert it to Celsius: "<<endl;
    cin >> temp2;
    celsResult  = ( temp2 - 32) * (5.0/9.0) ;
    cout << "Converted temperature " << temp2 << " from Fahrenheit to Celsius  is " <<celsResult*100/100 << endl;
}

