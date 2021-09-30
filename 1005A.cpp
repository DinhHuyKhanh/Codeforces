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
    int n;
    cin>>n;
    vector<int> a(n),res;
    cin>>a[0];
    int cnt=1;
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i] <= a[i-1]){
            res.pb(cnt);
            cnt=0;
        }
        cnt++;
    }
    res.pb(cnt);
    cout<<sz(res)<<"\n";
    for(auto x: res) cout<<x<<" ";

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
