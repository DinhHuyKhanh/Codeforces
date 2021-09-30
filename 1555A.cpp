#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 30/07/2021
* @function : A
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
    uint64_t n,res=0;
    cin>>n;
    if(n&1) n++;
    if(n<=6){
        res=15;
    }else{
        res= n*2 + (n/2);
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
