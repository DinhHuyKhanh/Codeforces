#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,v,v1,res=0,money=1;
    cin>>n>>v;
    if(n-1<=v){
        cout<<(n-1);
        return;
    }
    res=v;
    for(int i=2;i<=n;i++){
        res+= i;
        if(n-i==v){
            break;
        }
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
