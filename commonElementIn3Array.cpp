#include<set>
#include<algorithm>
#include<iostream>
using namespace std;
vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    int na = a.size();
    set<int>s;
    for(int i =0;i<na;i++){
        int tp=a[i];
        if(binary_search(b.begin(),b.end(),tp)){
            if(binary_search(c.begin(),c.end(),tp)){
                s.insert(tp);
            }
        }
    }
    vector<int>trp(s.begin(),s.end());
    return trp;
}


int main(){

vector<int> ar0 = {12,23,34,32,45,65,98};
vector<int> ar1 = {112,213,34,321,425,65,98};
vector<int> ar2 = {121,231,34,2,5,6,98};
vector<int> f = findCommonElements(ar0,ar1,ar2);
for(auto x: f){
    cout<<x<<endl;
}
return 0;
}