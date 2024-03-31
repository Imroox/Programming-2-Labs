//Write a function that will take a number as input and print it out in words.
//Input: 456
//Output: four five six

#include <iostream>
using namespace std;

void string_to_num(int a) {
    string converted = to_string(a);

    for (int i = 0; i < converted.length(); i++) {
        switch (converted[i]) {
            case '0':
                cout << "zero";
                break;
            case '1':
                cout << "one";
                break;
            case '2':
                cout << "two";
                break;
            case '3':
                cout << "three";
                break;
            case '4':
                cout << "four";
                break;
            case '5':
                cout << "five";
                break;
            case '6':
                cout << "six";
                break;
            case '7':
                cout << "seven";
                break;
            case '8':
                cout << "eight";
                break;
            case '9':
                cout << "nine";
                break;

        }
    }

}

int main (){
    string_to_num(2345);
}
