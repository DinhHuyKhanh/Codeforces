#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll a,b,c,d,res=0;
    cin>>a>>b>>c>>d;
    if((a+b+c+d)%3==0){
        res= (a+b+c+d)/3;
        if(a<=res && b<=res && c<=res){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
return 0;
}
