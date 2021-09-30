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
const bool testcase=0;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(n),b(m);
    for(auto &x: a) cin>>x;
    for(auto &x: b) cin>>x;
    int q,y;
    cin>>q;
    while(q--){
        cin>>y;
        cout<<a[(y-1)%n]<<b[(y-1)%m]<<"\n";
    }
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
