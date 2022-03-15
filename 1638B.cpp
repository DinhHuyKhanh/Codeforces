#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 12/2/2022
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef deque<int> dq;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define tup tuple<int,int,int>
#define read(x) for(auto &i: x) cin>>i;
#define out(x) for(auto &i: x) cout<<i<<" ";
#define pb push_back
#define pf push_front
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define f first
#define s second
#define prec(n) fixed<<setprecision(n)
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
#define  prq priority_queue<int>
#define prgg priority_queue<int, vector<int>, greater<int> >
#define TC  1
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

void solve()
{
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;++i){
        cin>>a[i];
    }
    vector<int> odd, even;
     for(int i=0;i<n;++i){
        if(a[i]&1){
            odd.pb(a[i]);
        }else even.pb(a[i]);
     }
     bool bad=false;
     for(int i=1;i<sz(odd);++i){
        if(odd[i-1]>odd[i]) bad=true;
     }
     for(int i=1;i<sz(even);++i){
        if(even[i-1]>even[i]) bad=true;
     }
     cout<<(bad?"NO\n":"YES\n");
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(TC){
        int T;
        cin>>T;
        while(T--) solve();
    }else{
        solve();
    }
return 0;
}
