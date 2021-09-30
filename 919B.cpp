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

void solve()
{
    ll k,Sum=0,res=10,ans;
    cin>>k;
    while(k!=0){
        res+=9;
        ans=res;
        Sum=0;
        while(ans!=0){
            Sum += ans%10;
            ans/=10;
        }
        if(Sum == 10) k--;
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
