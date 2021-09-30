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

void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int> a(n);
    for(auto &x: a) cin>>x;

    int res=0;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>c) res=0;
        else{
            res+= (res)? 1: 2;
        }
    }
    cout<<(max(res,1))<<"\n";

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
