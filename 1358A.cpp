#include <bits/stdc++.h>

using namespace std;
int n,m,res;
void solve()
{
    cin>>n>>m;
    res=0;

    if(n%2==1 && m%2==1){
        res += (n/2)*(m);
        res += m/2 +1;
        cout<<res<<"\n";
        return;
    }
    if(n%2==0){
        res += n/2;
        res *=m;
        cout<<res<<"\n";
        return;
    }
    if(m%2==0){
        res += m/2;
        res *= n;
        cout<<res<<"\n";
        return;
    }
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
