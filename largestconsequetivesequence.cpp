#include<iostream>
using namespace std;
#include<unordered_set>
#include <vector>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end())
            continue;
        else{
            int count=0;
            int current=arr[i];
            while(s.find(current)!=s.end()){
                count++;
                current++;
            }
            ans=max(ans,count);
        }
    }
    return ans;
}

int main(){

    


    return 0;
}