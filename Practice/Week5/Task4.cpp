//Write a C++ function to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once

#include <iostream>
using namespace std;

bool check_characters(string text) {
    for (int i = 0; i <  text.length(); i++) {
        if (text[i] == 'g' or text[i] == 'G') {
            if (i+2< text.length() and (text[i+2] == 'e' or text[i+2] == 'E'))
                return true;
        }
        if (text[i] == 'e' or text[i] == 'E') {
            if (i+2 < text.length() and (text[i+2] == 'g' or text[i+2] == 'G'))
                return true;
        }
    }
    return false;
}


int main() {
    cout << "Original string: eagerer -> " << check_characters("eagerer") << endl;
    cout << "\nOriginal string: eaglets -> " << check_characters("eaglets") << endl;
    cout << "\nOriginal string: eardrop -> " << check_characters("eardrop") << endl;
}