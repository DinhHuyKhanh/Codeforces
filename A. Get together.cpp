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
#define TC  0
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;
const ll Nmax = 1e5+100;
ll a[Nmax], b[Nmax];
ll n;
bool isCheck(double m){
    double maxs=1e18, mins=1e18, left, right;
    maxs= a[0]+ b[0]*m;
    mins = a[0]-b[0]*m;
    for(int i=1;i<n;++i)
    {
        left = a[i]-b[i]*m;
        right = a[i]+b[i]*m;
        if( left > maxs){
            return false;
        }
        if ( right < mins) return false;
        maxs= min(maxs, right);
        mins = max(mins, left);
    }
    return true;
}
void solve()
{
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i]>>b[i];
    }
    double l=0,r=2e18+7, mid, tmp = 0;
    for(int i=0;i<100;++i){
        mid = (l+r)/2;
        if(isCheck(mid)){
            tmp = mid;
            r=mid;
        }else l=mid;
    }
    cout<<fixed<<setprecision(9)<<tmp<<endl;

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
