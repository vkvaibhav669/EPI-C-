#include<iostream>
using namespace std;

short Parity(unsigned long x){
	short result = 0;
	while(x){
		result^=1;
		x&=(x-1);
	}
	return result;
}

int main(){

unsigned long tea = 10001010;
short parity = Parity(tea);
cout<<"Parity of "<<tea <<" is "<<parity<<endl;



	return 0;
}

