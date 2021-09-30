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
#define mk make_pair

void solve()
{
    int n,k,start,ends; cin>>n>>k;
    map<int,vector<int>> mp;
    map<pair<int,int>,int> res;
    for(int i=0;i<n;i++){
        cin>>start>>ends;
        mp[start].pb(ends);
        res[mk(start,ends)]++;
    }
    k= n-k+1;
    for(auto x: mp){
        k-= x.s.size();
        if(k<=0){
                k+= x.s.size();
            sort(x.s.rbegin(),x.s.rend());
            for(int i=0;i<x.s.size();i++){
                k--;
                if(k==0){
                    cout<<res[mk(x.f,x.s[i])]<<"\n";
                    return;
                }
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
