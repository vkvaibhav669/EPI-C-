#include<iostream>
#include<algorithm>
using namespace std;
int pairSum(vector<int> &arr, int n, int target){
    int a=0,b=n-1,count=0;
    while(a<b){
        if(arr[a]+arr[b]==target){
            count++;
            a++;
            b--;
        }else if(arr[a]+arr[b]<target){
            a++;
        }else if(arr[a]+arr[b]>target){
            b--;
        }
    }
    if(count>0){
        return count;
    }else {
        return -1;
    }
}

int main(){
    vector<int> ar={12,23,34,0,64,56};
    int target=64;
    int n=ar.size();
    int answer = pairSum(ar,n,target);
    cout<<answer<<endl;

    return 0;
}