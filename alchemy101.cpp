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

int a[2000];

void solve()
{
    int m;
    cin>>m;
    vector<int> ans(m);
    for(int i=0;i<m;++i) ans[i]=i+1;

    int res=0;
    for(int i=1;i<=m;++i) res^=i;

    if(res!=m){
            cout<<(res)<<" ";
            cout<<(res^m)<<" aaaa\n";
        ans.erase(ans.begin()+(res^m)-1);
    }
    cout<<sz(ans)<<endl;
    for(auto &i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
void sol(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a^b)<<endl;
    cout<<(c^b);
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
        sol();
    }
return 0;
}