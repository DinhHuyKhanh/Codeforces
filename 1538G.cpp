#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int l,r,res=0;
    cin>>l>>r;
    res= r-l;
    while(r>=10){
        r /=10;
        res += r;
    }
    while(l>=10){
        l/=10;
        res-=l;
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
