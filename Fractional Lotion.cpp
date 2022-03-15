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
#define TC  1
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;
const int Nmax=10000+100;
int a[10000+100];
void build(){
    ll x;
    for(ll i=1;i<=10000;++i){
        for(ll j=i+1;j<=20000; ++j){
            x= (i*j)/(j-i);
            if(x<0 || x<j) continue;
            if( (i*j)%(j-i)==0) ++a[i];
        }
    }
}
void solve()
{
    string s;
    while(cin>>s)
    {
        ll n =0;
        bool bad=false;
        for(int i=0; i<sz(s); ++i)
        {
            if( bad)
            {
                int x= s[i]-'0';
                n*=10;
                n+=x;
            }
            else if(s[i]=='/') bad = true;
        }
        cout<<a[n]<<endl;
    }
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    build();
    if(TC)
    {
        int T;
        cin>>T;
        while(T--) solve();
    }
    else
    {
        solve();
    }
    return 0;
}
