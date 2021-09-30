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
    string s;
    cin>>s;
    char x='a';
    int ans=0, N=s.size(),sol;
    for(int i=0; i<N ;i++){
            sol = abs(s[i]-x);
        ans+= min(sol, 26-sol);
        x=s[i];
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
