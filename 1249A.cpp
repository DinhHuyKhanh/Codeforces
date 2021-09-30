#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
/*
    1 2 3 4 5
    1 3 5
    2 4

    1 2 3 4 5 6
    1 3 5
    2 4 6

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
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(all(a));
    bool bad=0;
    for(int i=1;i<n;i++){
        if(a[i]+1== a[i+1]) bad=1;
    }
    cout<<((bad)? 2: 1)<<"\n";

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
