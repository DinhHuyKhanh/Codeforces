#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

void solve()
{
    int64_t n,l,r,res=0;
    cin>>n>>l>>r;
    vector<int64_t> a(n);
    for(auto &x: a){
        cin>>x;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        res += upper_bound(a.begin()+i+1,a.end(),r-a[i]) - a.begin();
        res -= lower_bound(a.begin()+i+1,a.end(),l-a[i]) - a.begin();

    }
    cout<<res<<"\n";
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
