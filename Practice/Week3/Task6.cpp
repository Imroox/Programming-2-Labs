//Ask the user to enter coordinates of two points, and find the distance between them.
//Round the distance to two decimal places.
#include<cmath>
#include <iostream>
using namespace std;

int main() {
   int x1,x2,y1,y2;
   double distance;

   cout<<"Enter coordinates for point 1: "<<endl;
   cin>>x1>>y1;

   cout<<"Enter coordinates for point 2: "<<endl;
   cin>>x2>>y2;

   distance= sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

   cout<<"Distance between these 2 points is: "<<round(distance*100)/100;

}
