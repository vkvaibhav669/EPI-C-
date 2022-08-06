#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int size = prices.size();
    int minp=INT_MAX;
    int maxp=0;
    int profitim=0;
    for(int i=0;i<size;i++){
        minp=min(minp,prices[i]);
       profitim = prices[i]-minp;
        maxp=max(maxp,profitim);
    }
    if(maxp>0){
        return maxp;
        }else {
        return 0;
    }
}