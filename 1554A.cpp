#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 29/07/2021
  @function : A
*/
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
    int n;
    cin>>n;
    vector<uint64_t> a(n);
    cin>>a[0];
    uint64_t ans=0,res=0;
    for(int i=1;i<n;i++){
        cin>>a[i];
        ans=a[i]*a[i-1];
        res= max(ans,res);
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
