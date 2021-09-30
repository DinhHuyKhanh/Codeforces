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
    vector<ull> a(n);
    for(auto &x: a) cin>>x;
    sort(all(a));
    if(a[n-1]==0){
        debugn(0);
        return;
    }
   for(int i=n-2;i>-1;--i){
        if(k==0) break;
        a[n-1]+=a[i];
        a[i]=0;
        --k;
   }
   sort(all(a));
   //for(auto x: a) debug(x);
   debugn(a[n-1]-a[0]);
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
