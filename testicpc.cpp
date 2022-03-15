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

/*void solve()
{
    int n,m,d;
    cin>>n>>m>>d;
    set<vector<int>> st;
    for(int i=0;i<n;++i){
        vector<int> a;
        for(int j=0,x; j< d+1; ++j){
            cin>>x;
            a.pb(x);
        }
        st.insert(a);
    }
    for(int i=0;i<m;++i){
        vector<int> a;
        for(int j=0,x; j< d+1; ++j){
            cin>>x;
            a.pb(x);
        }
        if(st.count(a)){
            cout<<"BAD\n";
        }else cout<<"GOOD\n";
    }
}*/
 ll F[1000005];
void solve()
{
  ll x;
    ll n;
    cin >> x >> n;
    vector<int> a(n);
    read(a);
    F[0]=1;
    for(int i=0;i<n;++i) F[a[i]]++;
    for(int i=0;i<=x;++i){
        if(F[i]){
            for(int j=0, tmp;j<n;++i){
                tmp= i+a[j];
                if(tmp<= x){
                    F[tmp]+= F[a[j]];
                }
            }
        }
    }
    cout<<F[x]<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
