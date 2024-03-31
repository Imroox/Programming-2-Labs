//Write a function that will take two time periods as inputs (in the HH:MM:SS format. The function should return the time passed between the two periods.
//Example:
//Enter the first time: 14 15 7
//Enter the second time: 16 9 34
//Time passed: 1 hour, 54 minutes and 27 seconds.
//Conversion into seconds=hours*3600+60*minutes+seconds
//Hours= seconds/3600;
//Minutes=seconds%3600/60;
//Seconds=seconds%3600;

#include <iostream>
using namespace std;

void passed_time (int hour1, int minute1, int seconds1, int hour2, int minute2, int seconds2){

    int diff;
    int sum1;
    int sum2;

    int new_hour, new_minutes, new_seconds;

    sum1=hour1*3600+60*minute1+seconds1;
    sum2=hour2*3600+60*minute2+seconds2;

    diff=sum2-sum1;

    new_hour=diff/3600;
    new_minutes=(diff%3600)/60;
    new_seconds=diff&60;

    cout<<"Time passed between is:"<<new_hour<<":"<<new_minutes<<":"<<new_seconds<<endl;

}

int main (){
    passed_time(14,15,7,16,9,34);
}
