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
bool check(vector<int> a){
    vector<int> b=a;
    sort(all(b));
    if(b==a) return false;
    return true;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    vector<vector<int>> res;
    vector<int> b=a;
    sort(all(b));
    while(check(a)){
        for(int i=0;i+1<n;++i){
            if(a[i]!=b[i]){
                int j=i+1;
                for(;j<n;++j){
                    if(a[j]==b[i]) break;
                }
                int d=j-i;
                res.pb({i+1,j+1,d});
                for(int k=j;k>i;--k){
                    swap(a[k],a[k-1]);
                }
            }
        }
    }
    cout<<sz(res)<<endl;
    for(int i=0;i<sz(res);++i){
        for(int j=0;j<3;++j){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
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
