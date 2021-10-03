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

void sol(){

}
void solve()
{
    string s,res="";
    cin>>s;
    s=s+" ";
    int n=sz(s), o=0,c=0;
    for(int i=0;i+1<n;++i){
        if(s[i]=='(' && s[i+1]==')'){
            res.pb('0');
            ++i;
        }else if(s[i]=='-' && s[i+1]=='>'){
            res.pb('-');
            ++i;
        }else if(s[i]=='('){
            res.pb('o');
        }else if(s[i]==')'){
            res.pb('c');
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
