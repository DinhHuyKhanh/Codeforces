#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void solve()
{
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<sz(s);i++) mp[s[i]]++;
    int res=0;
    res= mp.size();
    int cnt=0;
    for(auto x: mp)
    {
        if(x.s >=2) cnt++;
    }
    res= cnt;
    res+= (sz(mp) -cnt)/2;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
