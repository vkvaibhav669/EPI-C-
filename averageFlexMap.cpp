#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    	int a[n];
	    	map<int,int> mp;
	    int sum=0,l=0;
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	        mp[a[j]]++;
	    }
	    
	    for(auto kp : mp){
	        sum+=kp.second;
	        if(sum>n/2){
	            l+=kp.second;
	        }
	    }
	    cout<<l<<endl;
	}
	return 0;
}
