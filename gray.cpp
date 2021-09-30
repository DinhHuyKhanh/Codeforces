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
#define  pi   pair<int,int> x
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
#define testcase 0
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;

void solve()
{
    map<string,int> mp;int n;
    vector<string> res;
    cin>>n;
    string s(n,'0');
    ++mp[s];
    res.pb(s);
    while(1){
        bool bad=true;
        for(int i=n-1;i>=0;--i){
            string b=s;
            if(b[i]=='0'){
                b[i]='1';
            }else{
                b[i]='0';
            }
            if(mp.find(b) == mp.end()){
                res.pb(b);
                ++mp[b];
                s=b;
                bad=false;
                break;
            }
        }
        if(bad) break;

    }
    for(auto i : res){
        cout<<i<<endl;
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
