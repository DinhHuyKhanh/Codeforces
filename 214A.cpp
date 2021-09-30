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
    ll n,m,res=0;
    cin>>n>>m;
    for(int i=0;i*i<=n;i++){
        for(int j=0;j*j<=m;j++){
           if(i*i + j ==n && i + j*j ==m) res++;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
