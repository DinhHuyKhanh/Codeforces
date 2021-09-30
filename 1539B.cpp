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
    int n,q,l,r;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<uint> sum(n+1,0);
    for(int i=1;i<=n;i++){
        sum[i] += sum[i-1] + s[i-1]-96;
    }
    while(q--){
            int res=0;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
