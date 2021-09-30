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
int par[10000+100],a[10000+100];
int root(int v){
    return par[v]? par[v]=root(par[v]):v;
}
void mer(int u,int v){
    u=root(u);
    v=root(v);
    if(u!=v){
        par[v]=u;
    }
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]!=i){
            mer(i,a[i]);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!par[i]){
            ans++;
        }
    }
    cout<<ans;
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
