#include<iostream>
#include<vector>
using namespace std;


int minimumJumps(vector<int> &arr, int n)
{
    int jumps=0;
    int ac=0;
    int b=0;
    //int n =arr.size-1;
    while(b<n-1){
        int farthest=0;
        for(int i=ac;i<=b;i++){
            farthest=max(farthest,i+arr[i]);
        }
        if(farthest==0){return -1;}
        ac=b+1;
        b=farthest;
        jumps++;
    }
    return jumps;
}



int main(){


    vector<int> arr = {12,23,42432,45,231,232};
    int n = arr.size();
    int ans = minimumJumps(arr,n);
    cout<<"minimumJumps required are "<<ans<<endl;
    
    return 0;
}