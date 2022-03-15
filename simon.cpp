#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 12/2/2022
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef deque<int> dq;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define tup tuple<int,int,int>
#define read(x) for(auto &i: x) cin>>i;
#define out(x) for(auto &i: x) cout<<i<<" ";
#define pb push_back
#define pf push_front
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define f first
#define s second
#define prec(n) fixed<<setprecision(n)
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
#define  prq priority_queue<int>
#define prgg priority_queue<int, vector<int>, greater<int> >
#define TC  1
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

void solve()
{
    string s;
    getline(cin, s);
   vector<string> a;
   string str="";
   s.pb(' ');
   s.pb(' ');
   for(int i=0;i+1<sz(s);++i){
        if(s[i]!= ' '){
            str.pb(s[i]);
        }else{
            a.pb(str);
            if(s[i+1]==' ') break;
            else str="";
        }
   }
   if(sz(a)>2 && a[0] == "simon" && a[1]=="says"){
    for(int i=2;i<sz(a); ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
   }
   cout<<endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(TC){
        int T;
        cin>>T;
        T+=1;
        while(T--) solve();
    }else{
        solve();
    }
return 0;
}
