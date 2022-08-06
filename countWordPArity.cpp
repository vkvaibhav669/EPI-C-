#include<iostream>
using namespace std;
short Parity(unsigned long x){
    short result =0;
    while(x){
        result ^=(x&1);
        x>>=1;
        //cout<<"x = "<<x<<endl;
    }
    return result;
}


int main(){
    unsigned long u = 300565678654;
    cout<<"number is "<<u<<endl;
    short key = Parity(u);
    cout<<"Parity is "<<key<<endl;
}