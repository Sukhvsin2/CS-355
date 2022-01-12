#include<iostream>

using namespace std;

class FizzBuzz{
	int limit;
	public:
		FizzBuzz(int limit = 100);
		void run();
		void setLimit();
		void printGame();
};
