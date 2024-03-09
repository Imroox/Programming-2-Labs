//Write a C++  program to check whether the triangle is an equilateral, isosceles or scalene triangle.

#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout << "Enter values for three sides of triangle: \n";
    cin >> a >> b >> c;

    if ( a == b and b == c){
        cout << "Equilateral triangle.\n";
    }
    else if (a == b or b == c or a == c){
        cout << "Isosceles triangle\n";
    }
    else {
        cout << "Scalene triangle\n";
    }

}

