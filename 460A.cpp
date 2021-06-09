#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,m,res=0,d=0;
    cin>>n>>m;
    res=n;

    if(n==m) {
        cout<<++res;
        return;
    }
    while(1){
        if(n<m) break;
        res += n/m;
        n = n/m + n%m;
    }
    cout<<res;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();


return 0;
}
