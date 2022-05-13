#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int i;
    int arr[]= {12,34,43,455,-1};
    int n=sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++){
        cout<<arr[i]<<",";
    }cout<<endl;
    cout<<"Apply sort"<<endl;
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<",";
    }cout<<endl;
}