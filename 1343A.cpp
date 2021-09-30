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
vector<int> a;
int N;
void solve()
{
    int n;
    cin>>n;

    for(int i=1;i<N;i++){
        if(n%a[i]){
        }else{
        cout<<(n/a[i])<<"\n";
        return;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    a.pb(0);
    ll ans=1,res=1;
    for(int i=1;res<=1e9;i++){
        ans*=2;
        res+= ans;
        a.pb(res);
    }
    N=a.size();
    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
