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
    int n,k,cnt=0;
    cin>>n>>k;
    vector<pi> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].f;
        a[i].s=i;
    }
    sort(all(a));
    for(int i=1;i<n;i++){
        if(a[i].s != (a[i-1].s +1)) cnt++;
    }
    if(cnt>=k){
        cout<<"NO\n";
    }else cout<<"YES\n";
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
