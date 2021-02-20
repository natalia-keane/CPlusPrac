#include <iostream>
#include <sstream>
#include <string>
using namespace std;


#define NEWLINE '\n'

int timeAdd (int a, int b)
{
  int sum; //ending time
  sum=a+b;
  if(sum>2400){
  	sum-=2400; //removes 2400 as its a 24hr time frame.
	  // if it is an early time restart at 0 and give lower values.
  }
  int end=sum%10; //removes last digit
  int ned=sum/10; //gives remaining 3 digits
  int end2 = ned%10; //removes second to last digit
  
  ostringstream oss; //concatenates string
  oss << end2 << end; //concatenates last two digits
  istringstream iss(oss.str());
  int min;
  iss >> min; converts from string to integer
  int hr=ned/10;
  if(min>=60){
  	min-=60;// removes the 60 minutes from time and then convert to an hour
  	hr+=1; //adds one hour to time
  }
  int time; //final time in 24hr format
  ostringstream oss1;
  oss1 << hr << min;
  istringstream iss1(oss1.str());
  iss1 >> time;
  
  
  
  cout<< "Start time is "; //print statement
  cout<< a; 
  cout<< ". Duration is ";
  cout << b;
  cout<< ". End time is ";
  cout << time;
  cout << NEWLINE;

}

int main(){
    timeAdd(1045,345); //call function
    timeAdd(800,435);
    timeAdd(2300,300);
	}
