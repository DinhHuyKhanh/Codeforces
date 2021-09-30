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
vector<int> a;
void build(){
    int res=1;
    a.pb(1);
    for(int i=3;res<5100;i+=2){
        res+=i;
        a.pb(res);
    }
}
void solve()
{
    ll n,res;
    cin>>n;
    res= lower_bound(a.begin(),a.end(),n) - a.begin();
    cout<<res+1<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    build();
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
