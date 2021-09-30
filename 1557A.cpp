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
    ll n,s=0,x, Max= -10e9+7;
   cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        Max= max(x,Max);
        s+=x;
    }
    double res= Max + (s-Max)/(double)(n-1);
    printf("%.7f\n",res);
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
