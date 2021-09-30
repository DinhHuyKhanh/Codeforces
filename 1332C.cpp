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
const bool testcase=1;

void solve()
{
    int n,k,res=0;
    string s;
    cin>>n>>k>>s;
    s=' ' + s;
    for(int i=1;i<=n;i+=k){
        int cnt=0,t=i;
        t--;
        while( ++t && t*2 <i+k){
            if(s[t]!= s[i+k-t]) res++;
        }
    }
    cout<<(n-res)<<"\n";
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
