#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,m,x,Sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x;
        Sum+=x;
    }
    cout<<(Sum==m?"YES":"NO")<<"\n";
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
