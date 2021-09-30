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

ll a[1000000],cnt[1000000];
void solve()
{
    ll n,Sum=0,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        Sum+=a[i];
    }
    ll s=0;
    if(Sum%3!=0){
        cout<<"0\n";
        return;
    }
    Sum/=3;
    for(int i=n-1;i>=0;i--)
    {
        s+=a[i];
        if(Sum==s) cnt[i]=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        cnt[i]+=cnt[i+1];
    }
    s=0;
    for(int i=0;i<n-2;i++){
        s+=a[i];
        res += (s==Sum)? cnt[i+2]:0;
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
