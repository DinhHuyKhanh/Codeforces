#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=0;
int p[20000], c[20000], par[20000];

void solve()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>p[i];
        par[i]=p[i];
    }
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    int res=1;
    for(int i=2;i<=n;i++){
        if(c[i] != c[par[i]]){
            res++;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
