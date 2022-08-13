#include<iostream>
#include<string>
using namespace std;


string stringReverse(string S) {
   int low=0;
    int high = S.length()-1;
    while(low<high){
        swap(S[low++],S[high--]);
    }
  return S;
}


int main(){



	string s = "hello";
	string rev = stringReverse(s);
	cout<<rev;
	return 0;
}