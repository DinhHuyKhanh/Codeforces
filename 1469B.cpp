#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,m,x;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i] += a[i-1];
    }
    cin>>m;
    vector<int> b(m+1,0);
    for(int i=1;i<=m;i++){
        cin>>b[i];
        b[i] += b[i-1];
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    cout<<a[0]+b[0]<<"\n";
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
