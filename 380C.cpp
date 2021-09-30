#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
#define  ll = long long;
#define  ull = unsigned long long;
#define  vi = vector<int>;
#define  pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=0;
struct node{
    int optimal=0,open=0,close=0;
    node(){}
    node(int opt, int o, int c){
        optimal = opt,
        open= o,
        close =c;
    }
}; node ST[1000001*4];

node operator+ (const node& left, const node& right){
    node res;
    int tmp= min(left.open, right.close);

    res.optimal = right.optimal + left.optimal + tmp;

    res.open = right.open + left.open - tmp;
    res.close = right.close + left.close - tmp;

    return res;
}
string s;
void build(int id, int l, int r){
    if(l==r){
        if(s[l]==')') ST[id]= node(0,0,1);
        else ST[id] =node(0,1,0);
        return;
    }
    int mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);

    ST[id] = ST[id*2] + ST[id*2+1];
}

node query(int id, int l, int r,int u, int v){
    if(v<l || r<u){
        return node(0,0,0);
    }

    if(u<=l && r<=v){
        return ST[id];
    }

    int mid=(l+r)/2;
    return query(id*2,l,mid,u,v) + query(id*2+1,mid+1,r,u,v);
}
int l,r,q,n;
void solve()
{
    cin>>s;
    s=" "+s;
    n=sz(s);
    build(1,1,n);
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<(query(1,1,n,l,r).optimal*2)<<'\n';
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
