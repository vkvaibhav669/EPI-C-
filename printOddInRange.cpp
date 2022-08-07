#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main() {
	long long l,r;
	cin>>l>>r;
	vector<long long>aro;
	for(int i=l;i<=r;i++){
	    if(i%2!=0){
	        aro.push_back(i);
	    }else{
	        continue;
	    }
	}
	//sort(aro.begin(),aro.end());
	for(auto x : aro){
	    cout<<x<<" ";
	}
	return 0;
}
