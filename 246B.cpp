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

bool kt(ll n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve()
{
    int n,x;
    cin>>n;
    vector<int> a(n);
    ll Sum=0;
    for(auto &x: a) cin>>x, Sum+=x;
    if(Sum%n==0) cout<<n;
    else{
        cout<<n-1<<"\n";
    }



}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
