//Write a program in C++ to print a square pattern with the # character.
//Sample Output:
//Input the number of characters for a side: 4
//# # # #
//# # # #
//# # # #
//# # # #

#include <iostream>
using namespace std;

int main() {
    int rows, col;
    cout<<"Enter rows: "<<endl;
    cin>>rows;
    cout<<"Enter columns: "<<endl;
    cin>>col;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= col; j++) {
            cout << "# ";
        }
        cout<<endl;
    }
}