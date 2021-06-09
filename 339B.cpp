
/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int64_t n,m,ans=0;
    cin>>n>>m;
    vector<int64_t> vt(m);
    cin>>vt[0];
    ans+=vt[0]-1;
    for(int i=1;i<m;i++)
    {
        cin>>vt[i];

        if(vt[i] >= vt[i-1])
        {
                ans+=vt[i]-vt[i-1];
        }else{
                ans+=n-vt[i-1];
                ans+=vt[i];
        }
    }
    cout<<ans;

return 0;
}
