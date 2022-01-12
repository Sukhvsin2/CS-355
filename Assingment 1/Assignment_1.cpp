#include<iostream>

using namespace std;

class FizzBuzz{
	int limit;
	public:
		FizzBuzz(int limit = 100){
			this->limit = limit;
		}
		void run(){
			// rules over here
		}
		setLimit(){
			cout<<"Set limit for the function: ";
			cin>>this->limit;
		}
		void printGame(){
			for(int i=1;i<=this->limit;i++){
				if(i % 3 == 0 && i % 5 == 0) cout<<"FizzBuzz";
				else if(i % 3 == 0) cout<<"Fizz";
				else if(i % 5 == 0) cout<<"Buzz";
				else cout<<i;
				cout<<endl;
			}
		}
};

int main(){
	FizzBuzz f;
	f.setLimit();
	f.printGame();
	
	return 0;
}
