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
    int n;
    cin>>n;
    set<pair<int,int>> st;
    int sum=0, msx=0;
    for(int i=1,x;i<=n;++i){
        cin>>x;
        pair<int,int> value;
        value={x,i};
        st.insert(value);
        msx= max(msx,x);
        sum+=x;
    }

    if(sum%2!=0 || msx > sum/2){
        cout<<"no\n";
        return;
    }
    vector<pair<int,int>> res;
    while(sz(st)>1){
        auto dow = st.begin();
        auto top = --st.end();
        pair<int,int> d,t;
        d=*dow,
        t=*top;
        res.pb({d.s, t.s});
        st.erase(dow);
        st.erase(top);
        if(d.f>1){
            --d.f;
            st.insert(d);
        }
        if(t.f >1){
            --t.f;
            st.insert(t);
        }
    }
    if(sz(st)==0){
            cout<<"yes\n";
        for(int i=0;i<sz(res);++i){
            cout<<res[i].f<<" "<<res[i].f<<"\n";
        }
    }else cout<<"no\n";
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
