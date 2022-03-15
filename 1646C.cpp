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

vector<ll> a,b;
set<ll> c;
void build(){
    ull sum=1;
    c.insert(1);
    for(ll i=2;sum<=1e12; ++i){
        sum=sum*i;
        c.insert(sum);
    }
    sum=2;
    c.insert(2);
    for(int i=1;sum<=1e12; ++i){
        sum= sum*2;
        c.insert(sum);
    }
}
bool solve2(ll n, set<ll> &st2){
    ll N=n;
    set<ll> st;
    while(N){
        auto x = c.lower_bound(N);
        while(*x> n || st.find(*x) != st.end()){
            --x;
            if((*x)==1 && st.count(1)!=0){
                auto x = c.lower_bound(x);
                solve2(n,st2)
            }
        }
        x-=(*x);
        st.insert(*x);
    }
    st2=st;
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    set<ll> st;
    while(n){
        auto x = c.lower_bound(n);
        while(*x> n || st.find(*x) != st.end()){
            --x;
            if((*x)==1 && st.count(1)!=0){
                for(auto &i: st){
                    if(c.count(i+n)!=0 ){
                        cout<<sz(st)<<endl;
                        return;
                    }
                }
                cout<<"-1\n";
                return;
            }
        }
        n-=(*x);
        st.insert(*x);
    }
    cout<<sz(st)<<endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    build();
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
