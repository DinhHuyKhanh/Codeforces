#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 22/2/2022
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
int n,k;
bool check(ll mid, vector<int> &a){
    int cnt=0;
    ll sum=0;
    for(int i=0;i<n;++i){
        if(sum+a[i]<= mid){
            sum+=a[i];
        }else{
            sum=a[i];
            ++cnt;
        }
    }
    return cnt<k;
}
void solve()
{
    cin>>n>>k;
    vector<int> a(n);
    ll l=1,r=1e18, mid,res=1e18;
    for(auto &i: a){
        cin>>i;
        l=max(l,(ll)i);
    }
    while(l<=r){
        mid = (l+r)/2;
        if(check(mid,a)){
            res= min(res,mid);
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<res<<endl;


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
