#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=1;
const ll mod= 1000*1000*1000 + 7;

ll powermod(ll a, ll b)
{
  if (b < 0) return 0;
  if (!b) return 1;
  if (b == 1) return a;
  if (b & 1) return powermod(a, b - 1) * a % mod;
  return powermod(a * a % mod, b / 2);
}

void solve()
{

        int n, k;
      cin >> n >> k;

      if (n & 1)
      {
        cout << powermod(powermod(2, n - 1) + 1, k) % mod << '\n';
      }
      else
      {
        ll sparse = powermod(powermod(2, n - 1) - 1, k);
        ll ans = (powermod(2, (ll)n * k) - sparse);
        ans *= powermod((powermod(2, n - 1) + 1), mod - 2);
        ans += sparse;
        ans %= mod;
        while (ans < 0)
          ans += mod;
        cout << ans << '\n';
      }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }

return 0;
}
