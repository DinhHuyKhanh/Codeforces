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
    ll a,b,c,t,data;
    cin>>a>>b>>c;
    data= c*b;
    data= a*c-data;
    t = data%b ? data/b +1: data/b ;
    cout<<t;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    solve();

return 0;
}
