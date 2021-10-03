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
    int x,n;
    cin>>x>>n;
    vector<int> a,b;
    int val;
    for(int i=0;i<x;++i){
        cin>>val;
        if(val&1) a.pb(val);
        else b.pb(val);
    }
    int N=min(sz(a),n),M=sz(b);
    if(N%2==0) --N;
    for(int i=N;i>0;i-=2){
        if(N-n+M>=0){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
    /*
    if(sz(a)==0 || n>x){
        cout<<"No\n";
        return;
    }
    if(n==x && sz(a)%2==0 ){
        cout<<"No\n";
        return;
    }
    if()
    cout<<"Yes\n";*/
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