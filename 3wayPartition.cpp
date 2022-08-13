#include<iostream>
using namespace std;
#include<vector>
vector<int> threeWayPartition(vector<int> &arr, int n, int a, int b)
{
   int low=0,high =n-1;
    for(int i=0;i<n;i++){
        if(arr[i]<a){
            swap(arr[low++],arr[i]);
        }else if(arr[i]>b){
            swap(arr[high--],arr[i]);
        }
    }
    return arr;
 
}

int main(){

    vector<int>ar={12,23,34,232,32,2,34,45,3,87,89,987,567};
    int a=69;
    int b=450;
    threeWayPartition(arr,n,a,b);

    return 0;
}