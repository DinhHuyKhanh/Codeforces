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
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 1
const int mod = (int) 1e9 + 7;
ll x,y,p,q;
bool check(ll res){
    return   p * res>= x && q * res - p * res >= y - x;
}
void solve()
{
    cin>>x>>y>>p>>q;
    if(p==q){
        cout<<(x==y?0:-1)<<'\n';
        return;
    }
    if(p==0){
        cout<<(x?-1:0)<<'\n';
        return;
    }
    ll l=-1,r=1e9,m;
    while(r-l>1){
        m=(l+r)/2;
        if(check(m)){
            r=m;
        }else l=m;
    }
    cout<<(r*q-y)<<'\n';
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
