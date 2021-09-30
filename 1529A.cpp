#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;

void solve()
{
    int n,smin=99999,x,res=0;
    cin>>n;
    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        smin = min(smin,x);
    }
    for(auto &y: mp){
            res += y.second;
    }
    res -=  mp[smin];
    cout<<res<<'\n';
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
