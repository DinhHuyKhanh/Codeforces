#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        long long a,minx=0,masx=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a;
            minx +=a;
           if(a%x==0) masx = masx+ a/x;
           else masx = masx + 1 + a/x;
        }
        if(minx%x==0) cout<<minx/x;
        else cout<<minx/x+1;
        cout<<" "<<masx<<endl;

    }

return 0;
}
