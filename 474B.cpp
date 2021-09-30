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

int n,m,x;
vector<ll> Sum;
void solve()
{
    cin>>n;
    Sum.pb(0);
    for(int i=1;i<=n;i++){
        cin>>x;
        Sum.pb(x+Sum[i-1]);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        int l=0,r=n,m,res=0;
        while(l<=r){
            m = (l+r)/2;
            if(Sum[m]>=x){
                res=m;
                r=m-1;
            }else l=m+1;
        }
        cout<<res<<"\n";
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
