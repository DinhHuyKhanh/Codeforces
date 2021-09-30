#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

vector<ll> vals;
ll a,b,res=0;
void build(){
    a=2;
    b=2;
    vals.pb(2);
    for(int i=1;i<100000;i++){
        a+=3;
        vals.pb(a+b);
        b += a;
    }
}
void solve()
{
    res=0;
    cin>>a;
    while(a>=2){
        auto it= upper_bound(vals.begin(),vals.end(),a);

        a -= *(--it);
        res++;
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    build();
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
