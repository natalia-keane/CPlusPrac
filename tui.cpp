
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int calcTuition(){
	int idnumber;
	int totalcredits;
	int tuition=0;
	char ans[]= "Y";
	
	while((ans!="N") or (ans!="n")){
	
		cout<< "Please enter the id number ";
		cin>>idnumber;
		
		cout<< "Please enter the total number of credits enrolled ";
		cin>>totalcredits;
		
		if(totalcredits>=15){
			tuition=35000;
		}
		else if(totalcredits<15){
			tuition=850*totalcredits;
		}
		cout<<idnumber; 
		cout<<"\n$";
		cout<<  tuition;
		
		cout<< "\nDo you want to calculate the tuition fee for anther student? \n-- Y for yes and N for no\n";
		
		cin>>ans;
		
	}
	cout<< "\nGoodbye YAW University Student";
	
}

int main(){
	//calcTuition();
	for(int i=1; i<=8; i++){

	if(i==5){
	
	//break condition
	for(i=6; i<=8; i++){
		cout<<i;
	}
	
	break;
	
	}

	cout<<i;

}
}
