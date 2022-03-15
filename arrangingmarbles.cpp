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
const int Nmax= 1000*1000+100;

int cnt[1000+100], res[Nmax], use[Nmax];
void solve()
{
    int n;
    cin>>n;
    int N= n*n;
    set<pair<int,vector<int> > > st;
    vector<vector<int>> a(1000+10);
    for(int i=0,x; i<N; ++i)
    {
        cin>>x;
        cnt[x]++;
        a[x].pb(i);
    }

    for(int i=1; i<=n+1; ++i)
    {
        if(cnt[i])
        {
            st.insert({cnt[i],a[i]});
        }
    }

    for(auto x: st){
        for(auto i: (x).s){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    int group=0;
    while(st.size() > 1)
    {
        ++group;
        auto it = st.begin();
        auto up = --st.end();

        int x= (*it).f + (*up).f;
        int k = (x%n);
        if(k==0){
            k = min( (*it.f )
        }
        if(x<n)
        {
            cout<<x<<" ";
            cout<<"NO 1\n";
            return;
        }
        int value = k;
        for(int i=0;i< sz( (*it).s ), value > 0;++i){
            if(use[ (*it).s[i] ]) continue;
            --value;
            res[ (*it).s[i] ]=group;
            use[(*it).s[i]] = true;
        }
        value = n-k;
        for(int i=0;i<sz( (*up).s  ); ++i){
            if(use[ (*up).s[i] ]) continue;
            res[ (*up).s[i] ] = group;
            use[ (*up).s[i] ] =1;
            --value;
        }
        if( use[(*up).s[ (*up).f-1 ]]  ){
            st.erase(up);
        }

         if( use[(*it).s[ (*it).f-1 ]]  ){
            st.erase(it);
        }
    }
    cout<<st.size()<<endl;
    if(st.size()==0)
    {
        cout<<"YES\n";
        for(int i=0; i<N; ++i)
        {
            cout<<res[i]<<" ";
        }
    }
   /* else
    {
        auto it = st.begin();
        if( (*it).f  %n==0)
        {
            int cnt=0;
            for(int i=0; i<(*it).f; ++i)
            {
                ++cnt;
                if(cnt==n+1)
                {
                    cnt=1;
                    ++group;
                }
                res[ (*it).s[i]]=group;
            }
            cout<<"YES\n";
            for(int i=0; i<N; ++i)
            {
                cout<<res[i]<<" ";
            }
        }
        else
        {
            cout<<"NO";
        }
    }*/

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
