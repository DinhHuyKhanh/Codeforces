#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,m,res=0;
    cin>>n>>m;
    res = (24-n-1)*60;
    res += 60-m;
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
