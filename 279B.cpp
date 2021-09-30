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
    ll n,t,res=0,x;
    cin>>n>>t;
    vector<int> a(n+1,0);
    for(int i=0;i<n;i++){
        cin>>x;
        a[i+1] = a[i] + x;
    }
    for(int i=0;i<n;i++){
        ll l=i,r=n,m=0,cur=0;
        while(l<=r){
            m = (l+r)/2;
            if(a[m] - a[i] <= t){
                cur=m;
                l=m+1;
            }else r=m-1;
        }
        res= (cur-i < res)? res: (cur-i);
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
