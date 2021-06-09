#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n,m,res;
    cin>>n>>m;
    res = (n==1)? 0 : ( n==2? m : m*2);
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}
