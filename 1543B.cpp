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
    ll n,x;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    if(sum%n==0){
        cout<<"0\n";
        return;
    }
    ll mod = sum%n;
    ll res= (n-mod)*mod;
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
