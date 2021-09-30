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
    int n;
    cin>>n;
    vector<pair<string,int> > a;
    string name;
    int score;
    map<string,int> mp;

    for(int i=0;i<n;i++){
        cin>>name>>score;
        a.pb({name,score});
        mp[name]+=score;
    }

    int Max=-1;
    for(auto x: mp){
        Max = x.s> Max ? x.s : Max;
    }

    set<string> names;
    for(auto x : mp){
        if(x.s == Max){
            names.insert(x.f);
        }
    }
    mp.clear();
    for(int i=0;i<n;i++){
        if(names.find(a[i].f) != names.end()){
            mp[a[i].f] += a[i].s;
            if(mp[a[i].f] >= Max){
                Max= mp[a[i].f];
                cout<<a[i].f;
                return;
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
