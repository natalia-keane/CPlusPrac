#include <iostream>
#include <sstream>
#include <string>
#include <ctype.h>

using namespace std;


#define NEWLINE '\n'
int alphab[26]; //array count of alphabets
char alphas[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int frequency(){
	
	for(int j=0; j<=26;j++){
		alphab[j]=0;
	}
	
	cout<< "Enter a statement."; //print statement 
	cout << NEWLINE;
  	string str;//The cat sat on the green mat
  	getline(cin, str); //takes input string from user
  	char c;
  	int i=0;
  	int space=0; //space holder variable
  	while (str[i])
  {
    c=str[i]; //gets a character of string
    
    if(isspace(c)){ //checks if character is a space
    	
    	space=space+1;
	}
	else{
		c=tolower(c);//converts uppercase to lowercase
		
		if(isalpha(c)){
			
	    	switch(c){//checks the letter of the character and accumulates the count by 1
	    		case 'a': 
				alphab[0]+=1;
	    		break;
	    		case 'b': 
				alphab[1]+=1;
	    		break;
	    		case 'c': 
				alphab[2]+=1;
	    		break;
	    		case 'd': 
				alphab[3]+=1;
	    		break;
				case 'e': 
				alphab[4]+=1;
	    		break;
				case 'f': 
				alphab[5]+=1;
	    		break;
				case 'g': 
				alphab[6]+=1;
	    		break;
				case 'h': 
				alphab[7]+=1;
	    		break;
				case 'i': 
				alphab[8]+=1;
	    		break;
	    		case 'j': 
				alphab[9]+=1;
	    		break;
	    		case 'k': 
				alphab[10]+=1;
	    		break;
	    		case 'l': 
				alphab[11]+=1;
	    		break;
	    		case 'm': 
				alphab[12]+=1;
	    		break;
	    		case 'n': 
				alphab[13]+=1;
	    		break;
	    		case 'o': 
				alphab[14]+=1;
	    		break;
	    		case 'p': 
				alphab[15]+=1;
	    		break;
	    		case 'q': 
				alphab[16]+=1;
	    		break;
	    		case 'r': 
				alphab[17]+=1;
	    		break;
	    		case 's': 
				alphab[18]+=1;
	    		break;
	    		case 't': 
				alphab[19]+=1;
	    		break;
	    		case 'u': 
				alphab[20]+=1;
	    		break;
	    		case 'v': 
				alphab[21]+=1;
	    		break;
	    		case 'w': 
				alphab[22]+=1;
	    		break;
	    		case 'x': 
				alphab[23]+=1;
	    		break;
	    		case 'y': 
				alphab[24]+=1;
	    		break;
	    		case 'z': 
				alphab[25]+=1;
	    		break;
	    		case ' ':
	    		default:
	    			break;
			}
			
		}
	}
    
	    
    i++;
  }
  	cout << NEWLINE;
  	//prints the statement for letters that have a count greater than 0
  	for(int j=0; j<=26;j++){
  		if(alphab[j]!=0){
  			cout<< "The letter '";
  			cout<<alphas[j];
			cout<<"' occurs ";
			cout<<alphab[j];
			cout<< " times. \n";
		  }
	}
	cout << NEWLINE;
	
  
}

void make_histogram(int alphab[], char alphas[]){
   int maxEle =10; //sets bar for histogram
   int n=26;
   for (int i = maxEle; i >= 1; i--) {
   	cout << "\n";
      cout.width(2);
      cout << right << i ;
      cout << "  ";
      //prints * for counts
      for (int j = 0; j < n; j++) {
         if (alphab[j] >= i)//reads value stored in array
            cout << " * ";
         else
            cout << "   ";
      }
      
      }
   cout << "\n";
   cout << "    ";
   //prints out alphabets across base
    for (int i = 0; i <26 ; i++) {
      cout.width(2);
      cout << right << alphas[i] << " ";
   }
}

int main(){
	frequency();//calls function to count letters
	make_histogram(alphab, alphas); //calls function to print histogram
}

