#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    if(n&1){
        cout<<"NO\n";
    }else{
        n/=2;
        if(n&1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
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
