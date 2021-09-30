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

    int n,x,a,b;
void solve()
{
    cin>>n>>x>>a>>b;
    if(a>b) swap(a,b);
    int cnt=min(x,a-1);
    x-=cnt;
    a-=cnt;
    cnt =min(x,n-b);
    b+=cnt;
    cout<<(b-a)<<"\n";
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
