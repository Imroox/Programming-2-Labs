//Write a C++ program to input the basic salary of an employee and calculate its Gross salary by using the if-else statement.
//Write the program according to the following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
//Gross = salary + HRA + DA
//Dearness Allowance: Dearness Allowance is given out to employees to reduce the impact of inflation on employees.
//House Rent Allowance (HRA): For most employees, House Rent Allowance (HRA) is a part of their salary structure.
//Gross Salary: Gross Salary is the monthly or yearly salary before any deductions are made from it.


#include <iostream>
using namespace std;

int main() {
    double salary;
    cout << "Enter your salary: \n";
    cin >> salary;

    if (salary <=10000.0){
        cout << "Your gross salary is: " << salary + (salary * 0.2) + (salary * 0.8);
    }
    else if (salary <=20000.0 ){
        cout << "Your gross salary is: " << salary + (salary * 0.25) + (salary * 0.9);
    }
    else {
        cout << "Your gross salary is: " << salary + (salary * 0.3) + (salary * 0.95);
    }


}
