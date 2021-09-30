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
    ll a,b,ans;
    cin>>a>>b;
    if(a==b){
        cout<<"0 0\n";
        return;
    }
    ll z=abs(a-b);
        ans=min(z-a%z,a%z);
        cout<<z<<" "<<ans<<endl;

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
