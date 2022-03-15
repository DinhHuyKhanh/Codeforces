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
#define TC  0
const int mod = (int) 1e9 + 7;
const ll MOD = 998244353;

ll a[1000000+100][10],n;
ll deq(ll x, ll res, int pos){
        ++pos;
    if(x==0){
        for(ll i=1;i<=9;++i){
        res += deq(i,res, pos);
    }
    }else{
        if(pos == n+1) return res;
        if(x==1 || x== 9){
            res+=2;
        }else{
            res+=3;
        }
        for(ll i=1;i<=9;++i){
            res *= deq(x,res, pos);
        }
    }
    return res;
}
void solve()
{
    cin>>n;
    ll res=0;
    cout<<deq(0,1,1);
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
