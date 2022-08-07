#include<iostream>
#include<algorithm>

#include<vector>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
    int n = intervals.size();
    for(int i=0;i<n;i++){
        if(ans.empty()){
            ans.push_back(intervals[0]);
        }else{
            vector<int> &v = ans.back();
            int temp = v[1];
            if(intervals[i][0]<=temp){
                v[1]=max(temp,intervals[i][1]);
            }
        else{
            ans.push_back(intervals[i]);
        }
    }
    }
    return ans;
}


int main(){

    vector<vector<int>> ar = {{1,2},{2,3},{4,5},{5,8},{67,79},{64,89}};
    vector<vector<int>> ar1 = mergeIntervals(ar);
    for(vector<int>x : ar1){
        for(int y : x){
            cout<<y;
        }
    }
    


    return 0;
}