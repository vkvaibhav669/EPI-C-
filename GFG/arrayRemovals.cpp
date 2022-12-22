#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        int nSize = arr.size();
        int count = 0;int i,j;
        sort(arr.begin(),arr.end());
        for( i=0, j=0;i<nSize,j<nSize;j++){
            if(arr[j]-arr[i]<=k){
                count++;
            }
            else{
                i++;
            }
        }
        return (nSize-count);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}
