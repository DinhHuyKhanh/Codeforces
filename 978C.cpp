#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve()
{
    ll n,m,res=0,x;
    cin>>n>>m;
    vector<ll> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+= a[i-1];
    }
    while(m--){
        cin>>x;
        res = lower_bound(a.begin(),a.end(),x)-a.begin();
        cout<<res<<" "<<x-a[res-1]<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
