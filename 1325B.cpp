#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,x;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    cout<<mp.size()<<"\n";
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
