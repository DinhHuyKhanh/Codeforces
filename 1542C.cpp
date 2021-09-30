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
ll e= 1000000000+7;

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

uint64_t lcm(uint64_t a, uint64_t b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

void solve()
{
    ll n,res=0,z=1;
    cin>>n;
    res = n%e;
    for(ll i=1; z<=n ; i++){
        z = lcm(z,i);
        cout<<z<<" ";
        if(z>n) break;
        res += (n/z);
        res%=e;
    }
    cout<<res<<"\n";

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
