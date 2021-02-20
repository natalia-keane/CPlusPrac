
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int isOdd(){

int num;

do{ //repeats the snippet as long as the exit number is not entered
cin>>num; //takes input from user

if(num%2==1){ //checks if the remainder is 1. hence odd

cout<<"Odd";}

else if(num%2==0){

cout<<"Even";}


}while(num!=-1);



}
int main(){
	isOdd();
}

