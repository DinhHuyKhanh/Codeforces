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
    int n,m,u,v,res;
    cin>>n>>m;
    map<int,int> mp;
    res=n;

    while(m--){
        cin>>u>>v;
        if(u>v) swap(u,v);
        mp[u]++;
    }

    int type,q;
    cin>>q;
    while(q--)
    {
        cin>>type;
        if(type==1){
            cin>>u>>v;
            if(u>v) swap(u,v);
            mp[u]++;
        }else if(type==2){
            cin>>u>>v;
            if(u>v) swap(u,v);
            if(mp[u]==1){
                mp.erase(u);
            }else mp[u]--;
        }else{
            cout<<n-mp.size()<<"\n";
        }
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
