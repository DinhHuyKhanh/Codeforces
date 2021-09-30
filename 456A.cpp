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
#define fi first
#define sc second
#define mp make_pair

void solve()
{
    int n,quality;
    cin>>n;
    vector<pi> laptops(n);
    for(auto &x: laptops){
        cin>>x.fi>>x.sc;
    }

    sort(all(laptops));
    quality = laptops[0].sc;
    for(auto &x: laptops){
        if(x.sc < quality){
            cout<<"Happy Alex";
            return;
        }else quality = x.sc;
    }
    cout<<"Poor Alex";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
