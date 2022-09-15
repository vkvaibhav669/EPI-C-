#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

//User function Template for C++

string reverseWord(string str){
 int n =str.length()-1;
 int s=0;
 while(s<=n){
    swap(str[s],str[n]);
    n--;s++;
 }
 return str;
}