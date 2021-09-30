#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int x,res;
    cin>>x;
    res=x;
    while(x>=10){
        int mods = x%10;
        res += x/10;
        x/=10;
        x+=mods;
    }
    cout<<res<<"\n";

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
