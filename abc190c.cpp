/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int k,c,d;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>c>>d;
        a[c-1]=0;
        b[d-1]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==0 && b[i]==0)
        {
            ans++;
        }
    }
    cout<<ans;


return 0;
}
