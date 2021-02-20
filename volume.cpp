#include <iostream>
using namespace std;

#define PI 3.14159265
#define NEWLINE '\n'

int volumeForRadius (double r)
{
  double v; //volume
  double r3 =r*r*r; //calculates r cubed
  

  v = (4 * PI * r3)/3; //calculates volume
  cout<< "The volume of a sphere with radius "; //print statement
  cout<< r;
  cout<< " is ";
  cout << v;
  cout << NEWLINE;

}

int main(){
    volumeForRadius(1); //call function
    volumeForRadius(4.657);
    volumeForRadius(10);
    volumeForRadius(42);
}
