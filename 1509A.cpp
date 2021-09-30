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
    int n,x;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x&1){
            a.pb(x);
        }else b.pb(x);
    }
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<"\n";
    }
return 0;
}
