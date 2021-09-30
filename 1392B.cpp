#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=1;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    ll Max=-1e9-7;
    for(auto &x: a){
        cin>>x;
        Max=max(Max,x);
    }
    k= (k&1)? 1: 2;
    while(k--)
    {
        ll Maxs=-1e9-7;
        for(int i=0;i<n;i++){
            a[i]=(Max-a[i]);
            Maxs=max(Maxs,a[i]);
        }
        Max=Maxs;
    }
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
