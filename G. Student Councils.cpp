#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 27/1/2022
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
#define TC  0
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

vector<ll> a;
ll k,n;
bool isCheck(ll m){
    ll res= m*k;
    for(int i=0;i<n;++i){
        res-= min(m,a[i]);
    }
    if(res<=0) return true;
    return false;
}
void solve()
{
    cin>>k>>n;
    ll sum=0;
    for(ll x,i=0;i<n;++i){
        cin>>x;
        a.pb(x);
        sum+=x;
    }
    ll l=0, r=sum/k, mid, result=0;
    while(l<=r){
        mid = (l+r)/2;
        if(isCheck(mid)){
            result = mid;
            l = mid+1;
        }else r=mid-1;
    }
    cout<<result<<endl;
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
