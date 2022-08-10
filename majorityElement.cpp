#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	unordered_map<int,int> opt;
    for(int i=0;i<n;i++){
        opt[arr[i]]++;
    }
    vector<int>as;
    unordered_map<int,int> ::iterator it = opt.begin();
   while(it!=opt.end()){
        if(it->second>=n/k){
            as.push_back(it->first);
        }
       it++;
        
    }
    
    return as;
}


int main(){

    vector<int> itr = {1,2,3,32,324,4332,32,3432,342,43,43,4,34,3,3,3,3,3,3,1,2,3,2,1,2};
    int n = itr.size();
    int k = 4;
    std::vector<int> v= countTheNumber(itr,n,k);
    for(auto k : v){
        cout<<k<<endl;
    }


    return 0;
}