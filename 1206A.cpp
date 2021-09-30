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
    cin>>n;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    cin>>m;
    vector<int> b(m);
    for(auto &x: b) cin>>x;
    sort(all(a));
    sort(all(b));
    cout<<a[n-1]<<" "<<b[m-1]<<"\n";
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
