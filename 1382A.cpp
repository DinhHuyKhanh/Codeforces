#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    int n,m,x;
    cin>>n>>m;
    vector<int> a(n);
    map<int,int> mp;
    for(auto &x: a) cin>>x;
    for(int i=0;i<m;i++){
        cin>>x;
        mp[x]++;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(mp.find(a[i]) != mp.end()){
            cout<<"YES\n";
            cout<<1<<" "<<a[i];
            return;
        }
    }
    cout<<"NO";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
return 0;
}
