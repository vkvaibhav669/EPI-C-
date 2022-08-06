#include<iostream>
using namespace std;
#include<algorithm>




int Solution::solve(vector<int> &A, int B) {
    
    int n = A.size()-1;
    int sum=0;
    int j=0;
    int l=n-1;
    int endSum;
    for(int i=0;i<B;i++){
        sum+=A[i];
    }
    int maxSum=sum;
    int ex = B-1;
    int inc = n;
    while(inc!=n-B){
        sum+=A[inc];
        sum-=A[ex];
       maxSum=max(sum,maxSum); 
        inc--;
        ex--;
    }
    return maxSum;
}
