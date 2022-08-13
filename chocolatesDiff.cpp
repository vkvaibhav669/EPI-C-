#include<iostream>
using namespace std;

int findMinDiff(int n, int m, vector<int> chocolates) {
  if(m>n)return -1;
    sort(chocolates.begin(),chocolates.end());
    int res = chocolates[m-1] - chocolates[0];
    for(int i=1;(i+m-1)<n;i++){
        res = min(res,chocolates[m+i-1]-chocolates[i]);
    }
    return res;    
}


int main(){



  return 0;
}