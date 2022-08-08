#include<iostream>
#include<algorithm>
using namespace std;

long long getInversions(long long *arr, int n){
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
return cnt;
}

int main(){

    return 0;
}