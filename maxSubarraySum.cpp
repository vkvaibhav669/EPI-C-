#include <iostream>
#include<climit>
using namespace std; 
long long maxSubarraySum(int arr[], int n)
{
    long long max_so_far=INT_MIN, max_ending_here=0;
    for(int i=0;i<n;i++){
        max_ending_here=max_ending_here+arr[i];
        max_so_far = max(max_ending_here,max_so_far);
        
        if(max_ending_here<0){
            max_ending_here=0;
        }
    }
    return max_so_far >0 ? max_so_far:0; 
    
}


int main(){
    int ar[] = {2,3,-2,43,89,-90,345,589,669};
    int n = sizeof(ar)/sizeof(ar[0]);
    long long ap = maxSubarraySum(ar,n);
    cout<<ap<<endl;
    return 0;

}