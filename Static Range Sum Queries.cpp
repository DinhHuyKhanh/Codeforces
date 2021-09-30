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

int n,q,a,b;
void solve()
{
    cin>>n>>q;
    vector<ll> Sum(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>Sum[i];
        Sum[i] += Sum[i-1];
    }
    while(q--)
    {
        cin>>a>>b;
        cout<<Sum[b]-Sum[a-1]<<"\n";
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
