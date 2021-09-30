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
    ll a,b,r,Amax,Amin,res;
    cin>>a>>b>>r;

        Amin = min(a,b);
        Amax = max(a,b);
        Amin = Amin*(1+r);
        if(Amax <= Amin){
            cout<<"YES\n";
        }else cout<<"NO\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
