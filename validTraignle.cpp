#include <iostream>
#include<math.h>
using namespace std;

int main() {
    long long a,b,c;
    cin>>a>>b>>c;
    long long s = (a+b+c)/2;
	long long area = sqrt(s*(s-a)*(s-b)*(s-c));
	if(area>0){
	    cout<<"YES"<<"\n";
	}else{
	    cout<<"NO"<<"\n";
	}
	return 0;
}
