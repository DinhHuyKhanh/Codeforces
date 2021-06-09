#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n+1,0);
    if((m-1)+(n-1)*(m) ==k){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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
