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
    ll n,res=1e9,ans=0;
    cin>>n;
    int x=sqrt(n);
    for(int i=x;i>0;i--){
        ans= i-1 + (n-i)/(i);
        ans += (n-i)%i!=0 ? 1: 0;
        res=min(ans,res);
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
   // build();
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
