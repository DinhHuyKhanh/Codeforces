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
#define TC  1
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n+1,0);
    for(int i=1; i<=n; ++i) cin>>a[i];
    set<int> st1,st2;
    for(int i=2; i<n; ++i)
    {
        if(a[i]&1)
        {
            st1.insert(i);
        }
        else
        {
            st2.insert(i);
        }
    }
    ll res=0;
    while(st1.size() && st2.size())
    {
        set<int> st;
        bool bad1=false;
        for(auto i: st2)
        {
            auto up = st1.upper_bound(i);
            auto it = st1.upper_bound(i);
            --it;

            bool bad=false;
            if(*it>0){
                a[*it]+=1;
                bad=true;
                st1.erase(it);
                st.insert(*it);
            }
            if(*up>i){
                a[*up]+=1;
                bad=true;
                st1.erase(up);
                st.insert(*up);
            }
            if(bad){
                res+=1;
                a[i]-=2;
            }else{
                bad1=true;
                break;
            }

        }
        st2= st;
        if(bad1) break;
    }
    if(sz(st1)){
        cout<<-1<<endl;
        return;
    }
    for(int i=2;i<n;++i){
        res+= a[i]/2;
    }
    cout<<res<<endl;
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
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
