#include<iostream>
#include<algorithm>


using namespace std;


bool solve(int n,int target ,vector<int> &a,vector<vector<int>>&dp){
    if(target==0)return true;
    if(n==0)return (a[0]==target);
    if(dp[n][target]!=-1)return dp[n][target];
    bool taken = false ;
    if(a[n]<=target){
        taken=solve(n-1,target-a[n],a,dp);
    }
    bool notTaken = solve(n-1,target,a,dp);
    return dp[n][target]=taken | notTaken;
    
}


bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    return solve(n,k,arr,dp);
}


int main(){


    int sum=55;
    vector<int> ar = {11,22,33,44,55,66,99};
    int n = ar.size();
   bool subsetsum =  subsetSumToK(n,sum,ar);
   cout<<subsetsum<<endl;
    return 0;
}