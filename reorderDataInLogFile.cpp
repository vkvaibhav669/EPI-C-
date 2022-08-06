#include<iostream>
#include<algorithm>

using namespace std;

bool cmp(string& A)
{
    int l = A.length();
    int i=0;
    for(i=0; i<l; i++)
    {
        if(A[i]=='-')
            break;
    }
    return (A[i+1]>=97 && A[i+1]<=122);
}

bool cmp1(vector<string>& a1, vector<string>& a2)
{
    int l1 = a1.size();
    int l2 = a2.size();

    for(int i=1; i<min(l1,l2); i++)
    {
        if(a1[i]==a2[i])
            continue;
        return (a1[i]<a2[i]);
    }

    if(l1==l2)
        return (a1[0]<a2[0]);
    return (l1<l2);
}

vector<string> Solution::reorderLogs(vector<string> &A) {

    int n = A.size();
    vector<string> :: iterator it = stable_partition(A.begin(),A.end(),cmp);
    int pos = it-A.begin();
    vector<vector<string>> s(n);

    for(int i=0; i<pos; i++)
    {
        string temp = "";
        int l1 = A[i].length();
        for(int j=0; j<l1; j++)
        {
            if(A[i][j]=='-')
            {
                s[i].push_back(temp);
                temp = "";
            }
            else temp = temp + A[i][j];
        }
        s[i].push_back(temp);
    }


    sort(s.begin(),s.begin()+pos,cmp1);
    for(int i=0; i<pos; i++)
    {
        string temp = "";
        int j=0;
        for(j=0; j<(int)s[i].size()-1; j++)
            temp = temp + s[i][j] + '-';
        temp = temp + s[i][j];
        A[i] = temp;
    }

    return A;
}