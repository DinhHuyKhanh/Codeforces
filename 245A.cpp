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
    int n;
    cin>>n;
        pair<int,int> a1,a2;
        a1={0,0};
        a2={0,0};
    while(n--){
        int t,x,y;
        cin>>t>>x>>y;
        if(t==1){
            a1.f+=x;
            a1.s+=y;
        }else{
            a2.f+=x;
            a2.s+=y;
        }
    }
    if(a1.f>= a1.s){
        cout<<"LIVE\n";
    }else cout<<"DEAD\n";
    if(a2.f>=a2.s){
     cout<<"LIVE\n";
    }else cout<<"DEAD\n";
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
