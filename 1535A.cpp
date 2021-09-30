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
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    if(min(s1,s2) > max(s3,s4) || max(s1,s2) < min(s3,s4)){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }

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
