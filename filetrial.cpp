
int lengthFind(char mystring){
	//process	the	file	character-by-character,	and	once	it	has	processed	the	file	it	should	print	
//out	a	count	of	word	lengths,
//	i.e.	the	total	number	of	words	of	length	1	which	occurred,
int leng=0;

for(int j=1; j<=25;j++){
		lengths[j]=0; //initialize word lengths to 0
	}

	char c;
  	int i=0;
  	int space=0; //space holder variable
  	while (mystring[i])
  {
    c=mystring[i]; //gets a character of string
    
    if(isspace(c)){ //checks if character is a space
    	space=space+1;
    	//leng=i;
    	for(int j=1; j<=25;j++){
    		if(leng==j){
    			lengths[j]+=1;
    			leng=0;
			}
			
	}
	}
	else{
		c=tolower(c);//converts uppercase to lowercase
		
		if(isalpha(c)){
			leng+=1;
}}
	//if sizeof(word)>25{cout <<"ERROR:; exit
	
	for(int j=1; j<=25;j++){
		//print statement up to longest word
		cout<< "length ";
  		cout<<lengthc[j];
		cout<<" : ";
		cout<<lengths[j];
		cout<< " occurrences. \n";
	}
}
