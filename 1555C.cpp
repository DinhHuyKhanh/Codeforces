#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 30/07/2021
* @function : C
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

ll a[100010],b[100010];
void solve()
{
    int m;
    cin>>m;
    for(int i=1;i<=m;i++) {
        cin>>a[i], a[i]+=a[i-1];
    }
    for(int i=1;i<=m;i++) {
        cin>>b[i];
        b[i]+=b[i-1];
    }

    int ans=0,res=1e9;
    for(int i=1;i<=m;i++){
        ans = max(b[i-1],a[m]-a[i]);
        res= min(ans,res);
    }
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
