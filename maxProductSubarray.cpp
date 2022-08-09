#include<iostream>
using namespace std;
#include<vector>
int maximumProduct(vector<int> &arr, int n)
{
	int minP=1;
    int maxP=1;int res = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
        swap(minP,maxP);
    }
    minP=min(arr[i],minP*arr[i]);
    maxP=max(arr[i],maxP*arr[i]);
    res = max(res,maxP);
    
}
    return res;
}

int main(){


    vector<int> arr = {12,23,43,65,53,-213,34,54,434,3445};
    int n = arr.size();
    int res = maximumProduct(arr,n);
    std::cout<<res<<endl;
    return 0;
}