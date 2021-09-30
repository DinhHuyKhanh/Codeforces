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
vector<vector<int>> a(101,vector<int> (101,0));
int root(int u, int i){
    return a[i][u]? a[i][u] = root(a[i][u],i) : u;
}
void Merge(int u,int v, int i){
    u=root(u,i), v= root(v,i);
    if(u!=v){
        a[i][u]= v;
    }
}
void solve()
{
    int n,m,q,ai,bi,ci,cnt,u,v;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>ai>>bi>>ci;
        Merge(ai,bi,ci);
    }
    cin>>q;
    while(q--){
        cin>>u>>v;
        cnt=0;
        for(int i=1;i<=m;i++){
            int xi=root(u,i) , yi= root(v,i);
            if(xi==yi) cnt++;
        }
        cout<<cnt<<"\n";
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
