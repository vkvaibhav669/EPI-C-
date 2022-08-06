#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int sumOfMaxMin(int *arr[], int n){
    
   int minim=arr[0];
   int maxim=arr[0];
    for(int i=0;i<n;i++){
        minim=min(minim,arr[i]);
        maxim=max(maxim,arr[i]);    
        }
    int sum=minim+maxim;
    return sum;
}


int main(){
    
    int a[]= {-23,-8,-898,89,679,669,10669,3010669};
    int n = sizeof(arr)/sizeof(int);
    int summinmax= sumofMaxMin(a,n);
    cout<<summinmax;
    cout<<" is the sum of min max"<<end;
    return 0;
}