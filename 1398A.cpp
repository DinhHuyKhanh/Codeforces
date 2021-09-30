#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;
int n;

void solve()
{
        cin>>n;
        vector<int> a(n);
        for(auto &x: a) cin>>x;
        if(a[0]+a[1] <= a[n-1]){
            cout<<1<<" "<<2<<" "<<n;
            return;
        }
        cout<<-1;

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
