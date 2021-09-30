#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void solve()
{
    ll n,res=0,curr;
    cin>>n;
    vector<ll> vals(n+2,0);
    for(ll i=1;i<=n;i++){
        cin>>vals[i];
    }
    for(ll i=1;i<=n+1;i++){
        res+= abs(vals[i]- vals[i-1]);
    }
    for(ll i=1;i<=n;i++){
        ll ans=max(vals[i-1],vals[i+1]);
        res -= ans < vals[i] ? vals[i]-ans: 0;
        vals[i] = vals[i] > ans ? ans : vals[i];
    }
    cout<<res;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }

return 0;
}
