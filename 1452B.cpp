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
    ll a,b,n,z=1,mul,pluss;
    cin>>n>>a>>b;
    while(z<=n){
       if((n-z)%b==0){
            cout<<"Yes\n";
            return;
       }
       z *=a;
       if(a==1) break;
    }
    cout<<"No\n";
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
