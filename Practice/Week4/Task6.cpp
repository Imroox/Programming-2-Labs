//Write a C++ program to find sum of 10 numbers, but this time skip over
// negative numbers

#include <iostream>
using namespace std;

int main() {
    int sum = 0, counter = 1, attempts = 1, number;

    while (attempts <= 10) {
        cout << counter << " number is: " << endl;
        cin >> number;
        counter++;
        attempts++;

        if (number > 0) {
            sum = sum + number;
        } else {
            cout << sum << endl;
            continue;
        }
    }
    cout << "The sum of 10 numbers is: " << sum << endl;
}
