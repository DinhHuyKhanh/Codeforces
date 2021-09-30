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
    string s,res="";
    cin>>s;
    int n=sz(s);
    bool bad=false;
    string Str="";
    for(int i=0;i<n;++i){
        if(i==0){
            if(s[i]=='h'){
                string str= s.substr(0,4);
                res+=str+"://";
                i=3;
            }else{
                string str= s.substr(0,3);
                res+=str+"://";
                i=2;
            }
        }else{
            if(bad==false){
                if(s[i]=='r' && s[i+1]=='u' && res[sz(res)-1]!='/'){
                    bad=true;
                    if(i+2 == n){
                        res+=".ru";
                    }else res+=".ru/";
                    i+=1;
                }else res.pb(s[i]);
            }else{
                res.pb(s[i]);
            }
        }
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
