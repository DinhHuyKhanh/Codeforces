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
    int n,m,boy,girl,res=0;
    cin>>n;
    multiset<int> boys;
    for(int i=0;i<n;i++){
        cin>>boy;
        boys.insert(boy);
    }

    cin>>m;
    vector<int> girls(m);
    for(auto &girl : girls){
        cin>>girl;
    }
    sort(all(girls));

    for(auto girl: girls){
        auto it = boys.lower_bound(girl-1);
        if(it != boys.end() && *it <= girl+1){
            res++;
            boys.erase(it);
        }
    }
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
