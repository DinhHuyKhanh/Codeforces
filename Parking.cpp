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

void solve()
{
    ll A,B,C;
    cin>>A>>B>>C;
    vector<int> a(110,0);
    ll maxs=0;
    for(int i=0,x,y;i<3;++i){
        cin>>x>>y;
        a[x]+=1;
        a[y]-=1;
    }
    for(int i=1;i<101;++i){
        a[i]+=a[i-1];
    }
    ll res=0;
    for(int i=0;i<101;++i){
        if(a[i]==1){
            res+=A;
        }else if(a[i]==2){
            res+=B*2;
        }else if(a[i]==3){
            res+=C*3;
        }
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
