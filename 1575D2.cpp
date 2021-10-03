#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 2/10/2021
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
    string s;
    cin>>s;
    if(s[0]=='0' && sz(s)>1){
        cout<<0<<endl;
        return;
    }
    ll res=0;
    int n= sz(s);
    for(int i=0;i<1000000000;i+=25){
        string str= to_string(i),ans=s;
        if(sz(s) > sz(str)) continue;
        if(sz(s) < sz(str)) break;
        bool bad = false;
        char X;
        for(int j=n-1;j>=0;--j){
            if(ans[j]=='_'){
                ans[j]=str[j];
            }else if(ans[j]=='X'){
                if(bad==false){
                    X=str[j];
                    bad=true;
                }
                    ans[j]=X;
            }
        }
//        cout<<str<<" "<<s;
        if(str==ans) ++res;
    }
    cout<<res<<endl;
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
