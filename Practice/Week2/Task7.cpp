//A student will not be allowed to sit in exam if his/her attendance is less than 75%.
//Take following input from user:
//Number of classes held
//Number of classes attended.
//And then print percentage of classes attended and if a student is allowed to sit in exam or not.




#include <iostream>
using namespace std;

int main() {
    double classesHeld,classesAttended,Attendance;
    cout<<"Enter a number of classes held: "<<endl;
    cin>>classesHeld;
    cout<<"Enter a number of classes attended: "<<endl;
    cin>>classesAttended;
    Attendance=(classesAttended/classesHeld)*100;

    if (Attendance>=75){
        cout<<"You are allowed to take exam."<<endl;
        cout<<"Your attendance: "<<Attendance<<"%"<<endl;
    }
    else{
        cout<<"You are not allowed to take exam."<<endl;
        cout<<"Your attendance: "<<Attendance<<"%"<<endl;
    }

}

