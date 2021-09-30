#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;

void solve()
{
    ll n,res,x,y,ans=0;
    cin>>n;
    vector<pair<int,int>> M(n);
    for(auto &x: M) cin>>x.first;
    for(auto &y: M) cin>>y.second;
    for(int i=0;i<n-1 ;i++){
        for(int j=i+1; j<n ;j++){
            x= abs(M[i].first-M[j].first);
            y =  abs(M[i].second - M[j].second);
            res = x*x + y*y;
            ans=max(ans,res);
        }
    }
    cout<<ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
