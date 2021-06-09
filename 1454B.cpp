#include<bits/stdc++.h>

using namespace std;
/*
int check(<int> a , int x)
{
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==x ) return 1;
    }
    return 0;
}
*/

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> cnt(n+1), idx(n+1);
        for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            ++cnt[x];
            idx[x]=i+1;
            cout<<cnt[i]<<" " ;
        }

        int vt=-1;
        for(int i=0;i<=n;++i)
        {
                if(cnt[i]==1)
                {
                    vt=idx[i];
                    break;
                }
        }

        cout<<vt<<endl;

    }






return 0;
}
