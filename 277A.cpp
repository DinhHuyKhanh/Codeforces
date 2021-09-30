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
int a[150], par[150];
int root(int v){
    return par[v]? par[v]=root(par[v]) : v;
}
void mer(int u,int v){
    v=root(v);
    u=root(u);
    if(u!=v){
        if(par[u] > par[v]) swap(u,v);
        par[v]=u;
    }
}

void solve()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        for(int j=0;j<t;j++){
            cin>>x;
            if(a[x]==0) a[x]=i;
            mer(i,a[x]);
        }
    }

    int res=0,cnt=0;
    for(int i=1;i<=n;i++){
        if(!par[i]) res++;
    }

    for(int i=1;i<=m;i++){
        if(!a[i]) cnt++;
    }

    res = (cnt>=n)? res: res-1;
    cout<<(res);
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
