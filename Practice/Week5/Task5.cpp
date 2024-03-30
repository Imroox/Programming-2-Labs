//Write a C++ function to check whether two characters appear equally in a given string.

#include <iostream>
using namespace std;

bool count_chars(string str, char ch1, char ch2){
    int counter1=0;
    int counter2=0;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == ch1)
            counter1++;

        if (str[i] == ch2)
            counter2++;
    }
    if (counter1==counter2){
        return true;
    }else{
        return false;
    }
}

int main() {

    cout << count_chars("aabcdeef",'a','e') << endl; // true

    return 0;
}