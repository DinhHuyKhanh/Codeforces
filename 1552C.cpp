#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  cout<<'\n'
#define  vi(x)  vector<int> x;
#define  pi(x)   vector<pair<int,int>> x;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x),rend(x);
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 1
const int mod = (int) 1e9 + 7;
int n,k;
void solve()
{
    cin>>n>>k;
    vector<bool> used(2*n+1,false);
    vector<int> a(k+1),b(k+1);

    for(int i=1;i<=k;i++){
        cin>>a[i]>>b[i];
        used[a[i]]=1, used[b[i]]=1;
    }
    vector<int> r;
    r.pb(0);
    for(int i=1;i<=2*n;i++){
        if(!used[i]){
            r.pb(i);
        }
    }

    int cnt=sz(r);
    for(int i=1;i<=cnt/2;i++){
        a.pb(r[i]);
        b.pb(r[i+cnt/2]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]>b[i]) swap(a[i],b[i]);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i]<a[j] && a[j]<b[i] && b[i]<b[j]){
                ++ans;
            }
        }
    }
    debugn(ans);
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
