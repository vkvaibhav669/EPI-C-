#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    int flag=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k){
            flag=1;
        }
    }
    cout<<flag;
 
	return 0;
}
