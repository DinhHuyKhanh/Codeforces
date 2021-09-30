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
const int N=500*1000+100;
int a[N],par[N],ra[N];

int root(int v){
    return par[v] ? par[v]=root(par[v]) : v;
}
void mer(int u, int v){
    u=root(u), v= root(v);
    if(u!=v){
        if(ra[u] < ra[v]){
            swap(u,v);
        }
        par[v]=u;
        ra[u]+=ra[v];
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) ra[i]=1;
    while(m--){
        int q,x;
        cin>>q;
        if(q)
        {
            cin>>x;
            x=root(x);
            for(int i=1;i<q;i++){
                cin>>a[i];
                mer(x,a[i]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<(ra[root(i)])<<" ";
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
