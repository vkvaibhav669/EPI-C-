#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    //Write your code here
    int n ;
    
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    rotate(a,a+k,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}