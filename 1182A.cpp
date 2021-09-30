#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int64_t pow(uint64_t a, uint64_t b){
    uint64_t ans=1;
    while(b){
        if(b&1) ans=(ans*a);
        a*=a ;
        b>>=1;
    }
    return ans;
}
void solve()
{
    int64_t n,res=3;
    cin>>n;
    res*=n;
    if(res%6!=0){
        cout<<0;
    }else{
        res/=6;
        res= pow(2,res);
        cout<<res;
    }


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
