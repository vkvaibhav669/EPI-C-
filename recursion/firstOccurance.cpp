//find the first occurance of element in array 

#include<iostream>
using namespace std;
#include<algorithm>
//divde into sub problems
int firstOccur(int arr[],int n,int key){
//base case 
if(arr[0]==key){
    return 0;
}

//recursive size 
int subindex = firstOccur(arr+1,n-1,key);
if(subindex!=-1){
    return subindex+1;
}
return -1;
//reduce the element size by each call
}

int main(){
    int arr[]= {12,23,2123,12,341231,7564};
    int n=sizeof(arr)/sizeof(int);
    int element ;
    cin>>element; // return -1 if not present 
    //sort(arr,arr+n);
    int index = firstOccur(arr);
    cout<<index<<" is the index of "<<element <<" !"<<endl;
}