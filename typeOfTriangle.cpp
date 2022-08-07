#include <iostream>
using namespace std;
#include<math.h>

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int ma=max(a,max(b,c));
	if(a+b+c-ma>ma){
	    if(a==b && b==c) cout << "1\n";
	    else if(a==b || b==c) cout << "2\n";
	    else cout << "3\n";
	}
	else cout << "-1\n";
	return 0;
}
