#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

#define NEWLINE '\n'


int lengths[25]; //array count of word lengths
char lengthc[25]={'1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25'};
int wordFind(){
	
	char mystring[200];
	FILE * pFile = fopen ("proj.txt","r"); //open file to read data
  if (pFile==NULL)
  {//checks if file is empty and notifies user
    cout<<"Empty file";
    cout << NEWLINE;
    fclose (pFile);
  }
  else{
  	for(int j=1; j<=25;j++){
		lengths[j]=0; //initialize word lengths to 0
	}
  	fgets(mystring,200,pFile);
  //	cout<<mystring;
    /* Length of words */
    string s;
    
	int sum = 0;
	int total = 0;	
	
	for (int k = 0; k < 200; k++)
	{
	if (mystring[k] != ' ' && mystring[k] != '.') {
	s += mystring[k];
	
	}
	else {
		for(int j=1; j<=25;j++){
			sum=s.length();
    		if(s.length()==j){
    			lengths[j]+=1;
    			if(sum>total){//tracks longest word
    				total=sum;
				}
			}
			
	}
	if(s.length()>25){
		//prints error message if a word is greater than 25 char
		cout<<"Error, word too large!";
		return 0;
	}

	s = "";
	}
	}
	for(int j=0; j<total;j++){
		//print statement up to longest word
		cout<< "length ";
  		cout<<lengthc[j];
		cout<<" : ";
		cout<<lengths[j+1];
		cout<< " occurrences. \n";
	}
    
    fclose (pFile);
  }
}







int main(){
	
	wordFind();
	
}
