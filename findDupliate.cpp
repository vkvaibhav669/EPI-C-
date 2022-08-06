#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans=0;
    int n =arr.size();
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        ans=ans^i;
    }
    return ans;
}



int main(){


    vector<int> arr = {12,323,2,43,3,3,4,5,6};
    findDuplicate(arr);
    return 0;
}