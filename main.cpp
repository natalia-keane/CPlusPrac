#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#define PI 3.14159265
#define NEWLINE '\n'

#define twenty 20 //assigned value for twenty note
#define ten 10 //assigned value for ten note
#define five 5 //assigned value for fivenote
#define one 1 //assigned value for one coin



int moneyMenu (int c)
{
  int rem=0; //remainder
  int n2;
  int n1;
  int n5;
  int coin;
  if(c>0){
  	n2=c/twenty; //counts number of twenty notes
  	rem=c%twenty; //obtains remainder after twenty notes removed
  	
  	n1=rem/ten;//counts number of ten notes
  	rem=rem%ten;//obtains remainder after ten notes removed
  	
  	n5=rem/five;//counts number of five notes
  	rem=rem%five;//obtains remainder after five notes removed
  	
  	coin=rem/one;//counts number of one coin
  	rem=rem%one;//obtains remainder after one coin removed
  	
  }
  

  cout<< c; //print variable
  cout<< " consists of ";
  cout<< n2;
  cout<< " $20 notes, ";
  cout << n1;
  cout<< " $10 notes, ";
  cout << n5;
  cout<< " $5 notes, ";
  cout << coin;
  cout<< " $1 coins.";

  
  cout << NEWLINE;

}


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
  iss >> min;// converts from string to integer
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
	int j=0;
	do{
			cout<< "Menu:\nEnter 1 for Volume of a sphere \nEnter 2 for Money Conversion\nEnter 3 for Time Addition"; //print statement 
	cout << NEWLINE;
	int i;
	cin>>i;
	if(i==1){
		volumeForRadius(1); //call function
    	volumeForRadius(4.657);
    	volumeForRadius(10);
    	volumeForRadius(42);
	}else if(i==2){
		moneyMenu(20); //call function
    	moneyMenu(79);
    	moneyMenu(10);
    	moneyMenu(42);
	}else if(i==3){
		timeAdd(1045,345); //call function
    	timeAdd(800,435);
    	timeAdd(2300,300);
	}else{
		cout<< "Invalid option"; //print statement 
	}
		j++;
	}while(j<3);
}
