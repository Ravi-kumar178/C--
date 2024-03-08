#include <iostream>
using namespace std;

double radiusOfCircle(int radius){
  double area = 3.14 * radius * radius;
  return area;
}

int main(){

  int radius;
  cout<<"Enter the radius of a circle: ";
  cin>>radius;

  double store = radiusOfCircle(radius);
  cout<<"The area of the circle is: "<<store;
  return 0;
}