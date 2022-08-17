#include<iostream>
#include<string>


int isCyclicRotation(string &p, string &q) 
{
   string t=p+p;
    if(p==q){return 1;}
    if(p.length()!=q.length()){return 0;}
    int pos = t.find(q);
    if(pos>=0)return 1;
    
    return 0;
}


int main(){
   
string p="qwerty";
string q="yqwert";
string r= "yqwertio";

int ans  = isCyclicRotation(p,q);
int anawer = isCyclicRotation(p,q);
cout<<ans<<endl;
cout<<answer<<endl;
return 0;




}