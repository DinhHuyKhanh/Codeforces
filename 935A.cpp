#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,res=0;
    cin>>n;

    for(int i=n/2 ;i>0;i--){
        if(n%i==0){
            res++;
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
