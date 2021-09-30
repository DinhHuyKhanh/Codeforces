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
    int n,m;
    string s,t="abc";
    cin>>n>>m>>s;
    int cnt=0;
    vector<vector<int>> a(6);
    // abc bca
    for(int i=0;i<n;i++){

    }


    int l,r;
    while(m--){
        cin>>l>>r;
        cout<<min({a[r] - a[l-1] , b[r]-b[l-1], c[r]-c[l-1] })<<"\n";
    }
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
