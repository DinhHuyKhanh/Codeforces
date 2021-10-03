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
    int n,m;
    cin>>n>>m;
    string s;
    map<string,set<int>> mp;
    vector<string> a(n);
    for(int i=0;i<n;++i){
        cin>>s;
        a[i]=s;
        mp[s].insert((i+1));
    }
    sort(all(a));
    for(int i=1;i<m;++i){
        if((i+1)&1){
             int l=0,r=0;
             string s1,s2;
            for(int j=1;j<n;++j){
                    s1=a[j-1].substr(0,(i)), s2= a[j].substr(0,(i));
                if(s1==s2){
                    r=j;
                }else{
                    sort(a.begin()+l,a.begin()+r+1);
                    l=j,r=j;
                }
            }
            sort(a.begin()+l,a.begin()+r+1);
        }else{
            int l=0,r=0;
            string s1,s2;
            for(int j=1;j<n;++j){
                s1=a[j-1].substr(0,(i)), s2= a[j].substr(0,(i));
                if(s1==s2){
                    r=j;
                }else{
                    sort(a.begin()+l,a.begin()+r+1,greater<string>());
                    l=j,r=j;
                }
            }
                sort(a.begin()+l,a.begin()+r+1,greater<string>());
        }
    }
    vector<int> res;
    for(int i=0;i<n;++i){
        auto it = --mp[a[i]].end();
        res.pb(*it);
        mp[a[i]].erase(it);
    }
    for(auto &i : res) cout<<i<<" ";
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
