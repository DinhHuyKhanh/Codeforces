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
    int n,x,res=1;
    cin>>n>>x;
    n-=2;
    if(n>0){
        if(n%x==0) res += n/x;
        else res += n/x +1;
    }
    cout<<res<<"\n";
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
