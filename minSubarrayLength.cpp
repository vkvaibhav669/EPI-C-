#include<climits>
#include<iostream>
using namespace std;
int minSubLength(vector<int> &arr,int target,int n){
    int min_len=n+1;
    int s=0;
    int e=0;
    int curr_sum=0;
    while(e<n){
        while(curr_sum<=target && e<n){
            curr_sum=curr_sum+arr[e++];
        }
        while(curr_sum>target && s<n){
            if(e-s < min_len){
                min_len=e-s;
            }
            else{
                curr_sum=curr_sum-arr[s++];
            }
        }        
    }
   return min_len;   
}


int minSubArrayLen(vector<int>& arr, int target, int n) {
    int result = minSubLength(arr,target,n);
    if(result == n+1){
        return 0;
    }else{
        return result;
    }
    
    
}

int main(){




    return 0;
}