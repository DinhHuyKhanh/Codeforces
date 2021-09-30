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
    ll n,k,res=0,x=0;
    cin>>n>>k;
    ll l=0, r=n ,m,index=0;
    while(l<=r){
        m =(l+r)/2;
        x = m*(m+1)/2;
        if(x - (n-m) - k >= 0){
            res = x-k;
            r=m-1;
        }else l=m+1;
    }
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
