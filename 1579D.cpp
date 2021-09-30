#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 28/09/2021
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define tup tuple<int,int,int>
#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
// sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

void solve()
{
    int n,x;
    cin>>n;
    set<pair<int,int>> st;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x) st.insert({x,i});
    }
    vii res;

    while(sz(st)>1){
        auto it= --st.end();
        ii a1=*it;
        st.erase(it);
        it=--st.end();
        ii a2=*it;
        st.erase(it);

        res.pb({a1.s,a2.s});
        --a1.f,--a2.f;
        if(a1.f) st.insert(a1);
        if(a2.f) st.insert(a2);
    }
    cout<<sz(res)<<endl;
    int N=sz(res);
    for(int i=0;i<N;++i){
        cout<<res[i].f<<" "<<res[i].s<<endl;
    }

}
void huykhanh(){
    int T;
    cin>>T;
    //T=1;
    while(T--) solve();
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    huykhanh();
return 0;
}
