#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  cout<<'\n'
#define  vi  vector<int>;
#define  pi  pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x),rend(x);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 0
const int mod = (int) 1e9 + 7;
const int Nmax= 1000*1000+100;
int a[Nmax], b[Nmax];
vector<int> ra1(Nmax,1), ra2(Nmax,1);

int root1(int v){
    return a[v]? a[v]=root1(a[v]):v;
}
void Merge(int u,int v){
    if((u=root1(u))== (v=root1(v))){
       return;
    }
    if(ra1[u]<ra1[v]) swap(u,v);
    a[v]=u;
    ra1[u]+=ra1[v];
}
int root2(int v){
    return b[v]? b[v]=root2(b[v]):v;
}
void Merge2(int u,int v){
    if((u=root2(u))== (v=root2(v))){
       return;
    }
    if(ra2[u]<ra2[v]) swap(u,v);
    b[v]=u;
    ra2[u]+=ra2[v];
}
void solve()
{
    int n,m1,m2,u,v;
    cin>>n>>m1>>m2;
    while(m1--){
        cin>>u>>v;
        Merge(u,v);
    }
    while(m2--){
        cin>>u>>v;
        Merge2(u,v);
    }
    vector<pair<int,int> > res;

    for(int i=1;i<=n;i++){
        if(root1(1)!= root1(i) && root2(1)!= root2(i)){
            Merge(1,i);
            Merge2(1,i);
            res.pb({1,i});
        }
    }
     u=1;
    for(int i=1;i<=n;i++){
        if(root1(1) != root1(i)){
            while( root2(1) == root2(u)) ++u;
            if(u<=n){
                Merge(i,u);
                Merge2(i,u);
                res.pb({i,u});
            }
        }
    }
    debugn(sz(res));
    for(auto x: res){
        cout<<x.f<<" "<<x.s<<'\n';
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
