#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;

void solve()
{
    ll n,x,Sum=0; cin>>n;
    priority_queue<ll,vector<ll>, greater<ll> > a;
    for(int i=0;i<n;i++){
        cin>>x;
        Sum+=x;
        a.push(x);
        while(Sum<0){
            Sum-=a.top();
            a.pop();
        }
    }
    cout<<a.size();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
