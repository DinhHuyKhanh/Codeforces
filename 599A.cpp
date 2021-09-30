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
    ll d1,d2,d3,res=0,ans=0;
    cin>>d1>>d2>>d3;
    res= 2*d1  + 2*d2;
    ans= d1+d2+d3;
    res=min(ans,res);
    ans= 2*d1+2*d3;
    res=min(res,ans);
    ans=2*d2+2*d3;
    res=min(res,ans);
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
