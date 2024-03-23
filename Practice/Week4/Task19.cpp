//Write a C++ program to count the total number of digits 1 appearing in all positive integers less than or equal to a given integer n.

#include <iostream>
using namespace std;

int main() {
    int end_no, counter;
    cout << "Enter number: " << endl;
    cin >> end_no;

    cout << "Entered number is " << end_no << endl;

    for (int i = 1; i <= end_no; i++) {
        int temp = i;
        while (temp > 0) {
            if (temp % 10 == 1)
                counter++;
            temp /= 10;
        }
    }
    cout << "Total number of 1's that appear until this number are " << counter << endl;
    return 0;
}
