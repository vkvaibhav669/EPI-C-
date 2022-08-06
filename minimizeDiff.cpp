int minimizeIt(vector<int> A, int k)
{
	sort(A.begin(),A.end());
    int n =A.size()-1;
    int md=A[n]-k;
    int sd=A[0]+k;
    int ma,mi;
    int ans=A[n]-A[0];
    for(int i=0;i<n;i++){
        mi=min(sd,A[i+1]-k);
        ma=max(md,A[i]+k);
        if(mi<0){
            continue;
        }
        if(ma<0){
            continue;
        }
        ans = min(ans,ma-mi);
    }
    return ans;
}