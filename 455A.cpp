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

ll a[100010],dp[100010];
void solve()
{
    ll n,res=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    dp[1]=a[1];
    for(int i=2 ; i<=100000;i++){
        dp[i]= max(dp[i-1],dp[i-2] + a[i]*i);
    }
    cout<<dp[100000]<<endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
