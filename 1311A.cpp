#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    if(a==b) res=0;
    else if(a>b){
        if((a%2==0 && b%2==0) || (a%2==1 && b%2==1)) res=1;
        else res=2;
    }else{
        if((a%2==0 && b&1) || (a&1 && b%2==0) ) res=1;
        else{
            if(b-a==1){
                res=1;
            }else{
                res=2;
            }
        }
    }
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
