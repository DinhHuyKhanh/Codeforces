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
    uint n,x,t,res=0;
    cin>>n>>x>>t;
    uint member = t/x;
    if(n>member){
        res= (n-member)*member;
    }
    member = min(n,member);
    res += member*(member-1)/2;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin>>k;
    while(k--) solve();

return 0;
}
