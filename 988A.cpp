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
    int n,k,x;
    cin>>n>>k;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>x;
        mp[x]=i;
    }
    if(sz(mp)<k){
        cout<<"NO\n";
        return;
    }
        cout<<"YES\n";
        int cnt=0;
    for(auto &x: mp){
        cout<<x.s<<" ";
        if(++cnt == k) return;
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
