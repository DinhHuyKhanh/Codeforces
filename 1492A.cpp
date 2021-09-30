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
    uint64_t p,a,b,c;
    cin>>p>>a>>b>>c;
    if(!p%a || !p%b || !p%c){
        cout<<0<<"\n";
        return;
    }
   uint64_t res=((p-1)/a +1 )*a - p;
    res = min( ((p-1)/b +1 )*b - p, res);
    res= min( ((p-1)/c +1)*c - p, res );
    cout<<res<<"\n";
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
