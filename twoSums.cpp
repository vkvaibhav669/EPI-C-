#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sort(nums.begin(),nums.end());
        
    int n=nums.size();
        vector<int> m;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                m.push_back(i);
                m.push_back(j);
                break;
            }
                
            }
        }
        return m;
    }
};



int main(){

    Solution sol ;
    vector<int> ar1 = {12,23,34,21,2,21,1};
    vector<int> ans = sol.twoSum(ar1,14);
    return 0;
}