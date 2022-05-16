#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,h=s.size()-1;
        while(l<h){
            swap(s[l++],s[h--]);
        }
        }
        
    };


int main(){
    Solution ob;
    vector<char> ar={'a','e','i','o','u'};
    vector<char> a2= {'H','a','n','n','a','h'};
    ob.reverseString(ar);
    ob.reverseString(a2);
    for(auto a1:ar){
        cout<<a1<<",";
    }cout<<endl;
    for(auto a3:a2){
        cout<<a3<<",";
    }


}