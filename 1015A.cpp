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
#define  vi(x)  vector<int> x;
#define  pi(x)   vector<pair<int,int>> x;
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

void solve()
{
    pi(a);
    int n,m,x,y;
    cin>>n>>m;
    while(n--){
        cin>>x>>y;
        a.pb({x,y});
    }
    sort(all(a));
    vi(res);
    for(int i=1;i<=m;i++){
        bool bad=0;
        for(auto &x: a){
            if(i >= x.f && i<= x.s){
                bad=1;
            }
        }
        if(bad){}
        else res.pb(i);
    }
    debugn(sz(res));
    for(auto i : res) debug(i);
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
