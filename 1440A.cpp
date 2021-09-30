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
    int n,c0,c1,h;
    string s;
    cin>>n>>c0>>c1>>h>>s;
    map<int,int> mp;
    mp[0]=0;
    mp[1]=0;
    for(int i=0;i<n;i++) mp[(s[i]-'0')]++;
    ll res=mp[0]*c0 + mp[1]*c1;
    if(c0+h<c1){
        int k=mp[1];
        res-= k*(c1-(c0+h));
    }else if(c1 +h < c0){
        int k=mp[0];
        res -= k*(c0-(c1+h));
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
