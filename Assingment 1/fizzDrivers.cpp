#include"fizzclass.h"


FizzBuzz::FizzBuzz(int limit){
	this->limit = limit;
}
void FizzBuzz::run(){
	cout<<"FizzBuzz Game!!\n";
	cout<<"1. Set Limit\n";
	cout<<"2. Quit\n";
	int temp;
	cin>>temp;
	if(temp == 1) {
		setLimit();
		printGame();
	}
	else cout<<"\nThank you!\n";
}

int live(){
	int temp = 1;
	cout<<"\n1. Set New limit\n";
	cout<<"2. Quit Game!\n";
	cin>>temp;
	if(temp == 2) temp = 0;
	
	return temp;
}

void FizzBuzz::setLimit(){
	cout<<"Set limit for the function: ";
	cin>>this->limit;
}
void FizzBuzz:: printGame(){
	int temp = 1;
	while(temp){
		for(int i=1;i<=this->limit;i++){
			if(i % 3 == 0 && i % 5 == 0) cout<<"FizzBuzz";
			else if(i % 3 == 0) cout<<"Fizz";
			else if(i % 5 == 0) cout<<"Buzz";
			else cout<<i;
			cout<<endl;
		}
		temp = live();
		if(temp) setLimit();
	}
}
