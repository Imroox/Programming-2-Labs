//Write a C++ function to check if a given positive number is a multiple of 3 or a multiple of 7.

#include <iostream>
using namespace std;

bool check_int(int number){
    if (number % 3 == 0 or number % 7 == 0){
        return true;
    }
    return false;
}
int main()
{
    cout << check_int(3) << endl;
    cout << check_int(14) << endl;
    cout << check_int(12) << endl;
    cout << check_int(37) << endl;
    return 0;
}