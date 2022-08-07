#include <iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main() {
	vector<int>factors;
	int n;
	cin>>n;
	for(int i =1;i<=n;i++){
	    if(n%i==0){
	        factors.push_back(i);
	    }else {
	        continue;
	    }
	}
	int size = factors.size();
	cout<<size<<endl;
	sort(factors.begin(),factors.end());
	for(auto ar : factors){
	    cout<<ar<<" ";
	}
	return 0;
}
