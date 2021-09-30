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
    int n,x;
void solve()
{
    cin>>n>>x;
    vector<int> a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(all(a));
    if(sum==x){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    if(sum<x){
        for(auto x: a) cout<<x<<" ";
        cout<<'\n';
        return;
    }

     sum=0;
    for(int i=0;i<n;i++){
       if(sum+a[i] == x){
            swap(a[i],a[i+1]);
            sum+=a[i];
       }else sum+=a[i];
       cout<<a[i]<<" ";
    }
    cout<<"\n";
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
