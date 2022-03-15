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

int dp[200][200];
int a[200], n;
int mex(int l, int r){
    vector<int> b;
    for(int i=l;i<=r; ++i){
        b.pb(a[i]);
    }
    sort(all(b));
    int mex=0;
    for(int i=0;i<sz(b);++i){
        if(b[i]!= mex){
            return mex;
        }
        ++mex;
    }
    return mex;
}
void solve()
{
    cin>>n;
    for(int i=0;i<110;++i){
        for(int j=0;j<110;++j){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i){
        if(a[i]==0){
            dp[1][i] = 2;
        }else dp[1][i]= 1;
    }
    for(int i=2; i<=n; ++i){
        for(int j=i;j<=n; ++j){
           dp[i][j] = dp[i-1][j-1]+ dp[i-1][j];
        }
    }
    ll res=0;
    for(int i=1;i<n;++i){
        for(int j=1; j<=n;++j){
            res+= dp[i][j];
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<res<<endl;

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
