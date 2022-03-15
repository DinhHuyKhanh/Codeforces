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
struct node{
    ll x,w,id;
};
bool comp(node a, node b){
    if (a.x < b.x) return 1;
    return 0;
}
int used[2*100*1000+ 100];
void solve()
{
    ll n, m;
    cin>>n>>m;
    for(int i=0;i<m+10;++i) used[i]=0;
    vector<node> a(m);
    for(int i=0;i<m;++i){
        cin>>a[i].x>>a[i].w;
        a[i].id =i+1;
    }
    sort(all(a), comp);
    ll cnt=0;
    set<pair<ll,ll>> st;
    for(int i=0;i<m;++i){
        if(i >= 2*n ){
            auto it = --st.end();
            if( (*it).f > a[i].w){
                used[(*it).s ] =1;
                st.erase(it);
                st.insert( {a[i].w, a[i].id} );
            }else{
                used[a[i].id]=1;
            }
        }else{
            st.insert({a[i].w, a[i].id});
        }
    }
    int i=0,j=m-1;
    ll ans=0;
    vector<pair<ll,ll> > res;
    while(i<j){
           while(used[a[i].id] && i<j) ++i;
           while(used[a[j].id] && i<j) --j;
           if(i<j){
            res.pb({a[i].id, a[j].id});
            ans+= a[i].w;
            ans+=a[j].w;
            ++i;
            --j;
           }
    }
    cout<<ans<<endl;
    for(auto i: res){
        cout<<i.f<<" "<<i.s<<endl;
    }


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
