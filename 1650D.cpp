#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:4/3/2022
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

int used[10000];
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n+10;++i) used[i]=0;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
        used[a[i]] = i;
    }
    vector<int> res(n,0);
    ll cnt=0;
    vector<int> change;
    for(int i=0;i<n;++i){
        //cout<<n-i<<" "<<used[n-i]<<endl;
        for(int j=0;j<sz(change); ++j){
            used[n-i] = used[n-i]-change[j];
            if(used[n-i] <0) {
                used[n-i] = n-j - abs(used[n-i]);
            }
        }
        if(used[n-i] == n-i-1){
            change.pb(0);
            continue;
        }

        res[n-i-1]= used[n-i]-0 + 1;
        change.pb(res[n-i-1]);
    }
    for(auto &i: res)  cout<<i<<" ";
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    srand((unsigned int)time(NULL));
    if(TC){
        int T;
        cin>>T;
        while(T--) solve();
    }else{
        solve();
    }
return 0;
}
