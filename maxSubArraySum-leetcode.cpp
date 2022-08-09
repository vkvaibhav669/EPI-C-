#include<vector>
#include<iostream>
using namespace std;
#include<climits>





class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n  = nums.size();
    int cs =0;
    int largestSum = INT_MIN;
    for(int i=0;i<n;i++){
        cs=cs+nums[i];
        if(cs<nums[i]){
            cs=nums[i];
        }
    largestSum=max(largestSum,cs);
        
    }
    return largestSum;
    }
};



int main(){



    Solution sol ;
    vector<int> arr = {12,34,354,43,233,-2,23,23}; 
    int sum = sol.maxSubArray(arr);
    return 0;
}