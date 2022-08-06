#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{

    sort(arr.begin(),arr.end());
    vector<int> ar ;
    ar.push_back(arr[k-1]);
    ar.push_back(arr[n-k]);
    return ar;
   
}

int main(){

    vector<int> arr = {12,34,53452,54352431,31342353,65344};
    int size = arr.size();
    vector<int> ak = kthSmallLarge(arr,size,4);
    for(auto x:ak){
        cout<<x<<endl;
    }

    return 0;
}