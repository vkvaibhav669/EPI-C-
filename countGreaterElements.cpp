#include<iostream>
using namespace std;

int Solution::solve(vector<int> &A) {
    int c=0;
    int n=A.size();
    int curMax =A[0];
    for(int i=0;i<n;i++){
        if(A[i]>curMax){
            c++;
            curMax=A[i];
        }
    }
    return c+1;
}