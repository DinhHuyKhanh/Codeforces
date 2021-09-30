#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
using ull = unsigned long long;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=1;
const int N= 400*1000+100;
const ull mod=1e9+7;
int a[N],b[N],par[N];

int root(int v){
    return par[v]? par[v]=root(par[v]):v;
}
void mer(int u,int v){
    u=root(u), v=root(v);
    if(u!=v){
        if(par[u]>par[v]) swap(u,v);
        par[v]=u;
    }
}

ull pow(ull a, ull b){
    ull ans=1;
    while(b){
        if(b&1) ans=(ans*a)%mod;
        a*=a;
        a%=mod;
        b>>=1;
    }
    return ans%mod;
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        par[i]=0;
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
        mer(a[i],b[i]);
    }
    ull cnt=0;
    for(int i=1;i<=n;i++){
        if(par[i]) continue;
        cnt++;
    }
    ull res= pow(2ull,cnt);
    res%=mod;
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
