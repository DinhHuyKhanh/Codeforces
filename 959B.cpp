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
int par[100000+100],val[100000+100];

int root(int v){
    return par[v]? par[v]= root(par[v]) : v;
}
void add(int gr, int grs){
    gr= root(gr);
    grs= root(grs);
    if(val[gr] > val[grs]){
            swap(gr,grs);
    }
    par[grs]= gr;
}
void solve()
{
    int n,k,m;
    cin>>n>>k>>m;
    map<string,int> mp;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        mp[s]=i;
    }
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    int x,gr,grs;
    while(k--){
        cin>>x>>gr;
        for(int i=1;i<x;i++){
            cin>>grs;
            add(gr,grs);
        }
    }

    ll res=0;
    for(int i=1;i<=m;i++){
        cin>>s;
        res+= val[root(mp[s])];
    }
    cout<<res;
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
