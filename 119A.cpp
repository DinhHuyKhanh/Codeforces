#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

uint64_t gcd(uint64_t a, uint64_t b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}
void solve()
{
    ll a,b,n,res=0,x,ans=0;
    cin>>a>>b>>n;
    while(n!=0){
       if(res==0){
            x=gcd(a,n);
            n-=x;
            res=1;
            ans=0;
       }else{
            x=gcd(b,n);
            n-=x;
            res=0;
            ans=1;
       }
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
