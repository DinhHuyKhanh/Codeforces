#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,x;
    cin>>n;
    vector<int> a;
    map<int,int> mp;
    for(int i=0;i<2*n;i++){
        cin>>x;
        if(mp.find(x)==mp.end()){
            a.push_back(x);
            mp[x]++;
        }
    }
    for(auto &x: a ) cout<<x<<" ";
    cout<<"\n";
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
