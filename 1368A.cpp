#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    ll a,b,n,res=0;
    cin>>a>>b>>n;
    while(a<=n && b<=n){
        if(a>b){
            b+=a;
        }else a+=b;
        res++;
    }
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
return 0;
}
