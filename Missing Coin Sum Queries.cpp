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
    int n,q;
    cin>>n>>q;
    vector<pi> a(n+1);
    a[0] = {0,0};
    for(int i=1;i<=n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(all(a));
    ll l,r,res;
    while(q--){
        cin>>l>>r;
        res=1;
        for(int i=1;i<=n;i++){
            if(a[i].f <= res && a[i].s >=l && a[i].s <= r){
                res += a[i].f;
            }else if(a[i].f == a[i+1].f){
                continue;
            }else break;
        }
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
