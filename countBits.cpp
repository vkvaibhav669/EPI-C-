#include<iostream>
using namespace std;

short countBits(unsigned int x){
    short num_bits = 0;
    while(x){
        num_bits +=x&1;
        x>>=1; 
       // cout<<"x="<<x<<endl;
    }
    return num_bits;
}



int main(){

    unsigned int k=12; // k will be considered in binary form 
    short k1 = countBits(k);
    cout<<"number of set bits = "<<k1<<endl;
    return 0;
}
