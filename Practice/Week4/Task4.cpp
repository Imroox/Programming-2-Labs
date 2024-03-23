//Write a C++ program to ask user for password until they enter correct password. The password will be initially set by the user.
//If the user enters wrong password 5 times, print out “Wrong password, better luck next time.”

#include <iostream>
using namespace std;

int main() {
    string password = "Hello", guessPassword;
    int counter = 0;

    while (counter < 5) {
        cout << "Enter a password: " << endl;
        cin >> guessPassword;

        if (password == guessPassword) {
            cout << "Correct password." << endl;
            break;
        } else {
            cout << "Incorrect password, try again: " << endl;
            cin >> guessPassword;
        }
        counter++;

    }
}