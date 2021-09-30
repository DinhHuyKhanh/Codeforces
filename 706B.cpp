#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll n,q,m,res=0;
    cin>>n;
    vector<ll> x(n);
    for(auto &a: x) cin>>a;
    sort(x.begin(),x.end());
    cin>>q;
    while(q--){
        cin>>m;
        res = lower_bound(x.begin(),x.end(),m+1) - x.begin();
        cout<<res<<"\n";
    }


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
