#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 12/2/2022
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef deque<int> dq;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define tup tuple<int,int,int>
#define read(x) for(auto &i: x) cin>>i;
#define out(x) for(auto &i: x) cout<<i<<" ";
#define pb push_back
#define pf push_front
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define f first
#define s second
#define prec(n) fixed<<setprecision(n)
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
#define  prq priority_queue<int>
#define prgg priority_queue<int, vector<int>, greater<int> >
#define TC  1
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;
int par[100000+100],ra[100000+100];
int root(int v){
    return par[v]? par[v]=root(par[v]):v;
}

void merg(int u, int v){
    u=root(u);
    v=root(v);
    if( u==v) return;
    if(u<v){
        swap(u,v);
    }
    par[v]=u;
    ra[v] += ra[u];
}
void solve()
{
     int n;
    cin>>n;
    for(int i=0;i<n+100;++i){
        par[i]=0;
        ra[i]=1;
    }
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    priority_queue <int, vector<int>, greater<int>> q;
    for(int i=0;i<n;++i){
        q.push(a[i]);
        int x= q.top();
        while(x>a[i]){
            merg(x, a[i]);
            q.pop();
            //x=q.top();
        }
    }
    ll res=0;
    for(int i=1;i<=n;++i){
        if(!par[i]) ++res;
    }
    cout<<res<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(TC){
        int T;
        cin>>T;
        while(T--) solve();
    }else{
        solve();
    }
return 0;
}
