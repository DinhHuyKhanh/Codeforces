#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 1/10/2021
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
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    ll sum=0;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        sum+=a[i];
    }
    vector<tuple<int,int,int>> tups;
    int x,y,z;
    for(int i=0;i<m;++i){
        cin>>x>>y>>z;
        if(x>y) swap(x,y);
        tups.pb({z,x,y});
    }
    sort(all(tups));
    ll SUM,res=0;
    for(int i=2;i<=n;++i){
        SUM= sum- a[i];
        int Max=0;
        for(int j=0;j<m;++j){
            if(get<1>(tups[j]) == i || get<2> (tups[j]) == i ){{
                Max=max(Max, get<0> (tups[j]));
            }
        }
            //cout<<Max<<endl;
        res= max(res,Max-SUM);
        }
    }
        if(res>0){
            cout<<min(res,tups[0]<<endl;
        }else cout<<-1<<endl;
}
void huykhanh(){
    int T;
    //cin>>T;
    T=1;
    while(T--) solve();
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    huykhanh();
return 0;
}
