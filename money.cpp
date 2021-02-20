#include <iostream>
using namespace std;

#define twenty 20 //assigned value for twenty note
#define ten 10 //assigned value for ten note
#define five 5 //assigned value for fivenote
#define one 1 //assigned value for one coin
#define NEWLINE '\n'

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

int main(){
    moneyMenu(20); //call function
    moneyMenu(79);
    moneyMenu(10);
    moneyMenu(42);
}
