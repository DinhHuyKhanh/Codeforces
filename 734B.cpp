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
    ll k2,k3,k5,k6,res=0,val;
    cin>>k2>>k3>>k5>>k6;
    val = min(k2,min(k5,k6));
    k2-=val, k5-=val,k6-=val;
    res = val*256;
    val = min(k3,k2);
    res += val*32;
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
