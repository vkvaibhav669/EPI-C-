#include<algorithm>
#include<iostream>
#include<utility>
using namespace std;
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
  sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i=0,j=0;
      int common =0;
    while(i<n&& j<m){
        if(arr1[i]==arr2[j]){common++;
                            i++;
                            j++;
                             }else if(arr1[i]>arr2[j]){
            j++;
        }else {
            i++;
        }
    }  
     pair<int,int> p(common,((n+m)-common));
    return p;
}

int main(){

vector<int> ar1 = {1,2,5,3,9,5,3,6,98,90,5,6,8,7};
vector<int> ar2 = {11,22,34,565,9,2,5,3,9,5,3,90};
int N =ar1.size();
int m=ar2.size();
pair<int,int> f1 = findSimilarity(ar1,ar2,N,M);
cout<<f1.first<<" , "<<f1.second<<endl;
return 0;


}