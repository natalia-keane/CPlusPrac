1)
int taxTotal(){

#define taxPercent 0.165 //16.5% constant

int price; //contains price of item

cin>>price;//obtains price from user

cout<<price '\n'; //print price and new line

int tax=price*taxPercent;//calculate tax

cout<<tax;//print tax

}



2) 
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

3) //convert while to for loop


int ans=0;

for(int choice=1; choice<=7; choice++){

	ans=choice+2;
	
	cout<<ans;
	cout<<"\n";

}

4)

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

5)//tuition program

int calcTuition(){
	int idnumber;
	int totalcredits;
	int tuition=0;
	char ans[]= "Y";
	
	while(ans!="N"){
	
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
	
	
}
