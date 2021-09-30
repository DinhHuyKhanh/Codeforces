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
#define  pi(x)   vector<pair<int,int>> x;
#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) rbegin(x),rend(x)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 1
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
vector<int> a;
void build(){
    int x=0;
    a.pb(0);
    a.pb(0);
    for(int i=1;i<=3*100000+100;++i){
        x= x^i;
        a.pb(x);
    }
}
void solve()
{

   int x,y;
    cin>>x>>y;
    int ans=a[x];
    if(ans==y){
        debugn(x);
        return;
    }
    if(x == (ans^y) ){
        debugn(x+2);
        return;
    }
    debugn(x+1);
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
