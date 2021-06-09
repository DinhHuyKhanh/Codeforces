#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int64_t n,k,res,device;
    cin>>n>>k;
    if(k<n){
        cout<<k<<"\n";
        return;
    }
    if(k==n){
        cout<<n+1<<"\n";
        return;
    }
    device = k/(n-1);
    res = (n-1)*device;
    res = (k%(n-1)!=0)? (k-res + device*n) : (device*n -1);



    cout<<res<<endl;
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
