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
    ll n,res=0;
    cin>>n;
    vector<pi> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].f;
        a[i].s=i+1;
    }
    sort(all(a));
    for(int i=0;i<n;i++){
        int j=i+1, Max= (2*n)/a[i].f;
        while(j<n && a[j].f <= Max){
            if(a[i].f * a[j].f ==  a[i].s + a[j].s){
                res++;
            }
            j++;
        }
    }
    cout<<res<<"\n";
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
