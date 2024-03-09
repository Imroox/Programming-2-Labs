//Write a C++ program to print the message based on the grade you received.
//A -  Excellent
//B - Great
//C -  Well done
//D - Solid
//E - You passed
//F - Better try again

#include <iostream>
using namespace std;

int main() {
    char grade;
    cout<<"Enter your grade: "<<endl;
    cin>>grade;

    switch(grade) {
        case 'A' :
            cout << "Excellent!" << endl;
            break;
        case 'B' :
            cout << "Great!" << endl;
            break;
        case 'C' :
            cout << "Well done" << endl;
            break;
        case 'D' :
            cout << "You passed" << endl;
            break;
        case 'F' :
            cout << "Better try again" << endl;
            break;
        default :
            cout << "Invalid grade" << endl;
    }
    cout << "Your grade is " << grade << endl;
    return 0;
}
