#include <iostream>
#include<algorithm>
using namespace std;
void sort012(int *arr, int n)
{
  int high = n-1;
    int low =0;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
                
                
            
        }
    }
}

int main(){
    int a[] = {1,2,0,1,2,2,2,0,0,1,1,1,2,2,2};
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
    sort012(a,n);
    for(int j=0;j<n;j++){
        cout<<a[j]<<",";
    }

    return 0;
}