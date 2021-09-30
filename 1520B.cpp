#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

int64_t powx(uint64_t a, uint64_t b){
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
    ll n,ans=0,x,d=1;
    cin>>n;
    x=n;
    while(n>=10){
        ans+=9;
        n/=10;
        d++;
    }
    int number =0;
    for(int i=d-1;i>0;i--){
        number += powx(10,i)*n;
    }
    number+=n;
    ans += n;
    if(x<number) ans--;
    cout<<ans<<"\n";
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
