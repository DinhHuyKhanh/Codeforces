#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define  vi(x)  vector<int> x;
#define  pi   pair<int,int> x
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
#define testcase 0
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
vector<int> a(30,0);
void build(){
    int ans=1;
    a[0]=1;
    for(int i=1;i<25;++i){
        ans*=2;
        a[i]=ans;
    }
}
void solve()
{
    int k,n,m,x;
    cin>>n>>m>>k;

    vector<int> val(m+1);
    for(auto &i: val) cin>>i;

    vector<map<int,int>> res(m+1);
    for(int i=0;i<=m;++i){
        x=val[i];
        while(x!=0){
            auto it= upper_bound(a.begin(),a.end(),x) - a.begin();
            --it;
            x-= a[it];
            ++res[i][it];
        }
    }
    int answer=0;
    for(int i=0;i<m;++i){
        map<int,int> mp;
            for(auto &x: res[i]){
                if(res[m].find(x.f) == res[m].end() ) ++mp[x.f];
            }
            for(auto &x: res[m]){
                if(res[i].find(x.f) == res[i].end() ) ++mp[x.f];
            }
       if(sz(mp)<=k)  ++answer;
    }
    debugn(answer);

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    build();
    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
