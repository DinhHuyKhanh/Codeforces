#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 27/09/2021
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
    string s,str;
    map<string,vector<int>> mp;
    cin>>s;
    int n=sz(s);
    for(int i=0;i+1<n;++i){
        if(s[i]==s[i+1]) continue;
        str=s.substr(i,2);
        mp[str].pb(i);
    }
    vector<int> a,b;
    a=mp["AB"];
    b=mp["BA"];
    int N=sz(a),M=sz(b);
    if(N==0 || M==0){
        cout<<"NO\n";
        return;
    }
    if(min(N,M)>1){
        cout<<"YES\n";
        return;
    }else{
        if(M==1){
             for(int i=0;i<N;++i){
                if( (a[i] != b[0] && a[i] != b[0]+1) && a[i]+1 != b[0] ){
                    cout<<"YES\n";
                    return;
                }
             }
        }else{
            for(int i=0;i<M;++i){
                if(b[i]!=a[0] && b[i]!= a[0]+1 && b[i]+1 != a[0]){
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
    //baba
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
