#include <iostream>
using namespace std;

int main() 
{
	  float r, diameter, circumference, area;
  cout << "Enter radius of the circle : ";
  cin >> r;
  
  diameter = 2 * r;
  cout << "The diameter is " << diameter;
  
  circumference = 2 * 3.14 * r;
  cout << "The diameter is " << circumference;
  
  area = 3.14 * r * r ;
  cout << " The area is " << area;
  
  return 0;
}
