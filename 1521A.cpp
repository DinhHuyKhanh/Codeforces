#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int64_t a,b,res;
    cin>>a>>b;
    if(b==1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<"\n";
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
