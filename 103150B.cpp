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
#define  pi(x)   vector<pair<int,int>> x;
#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) rbegin(x),rend(x)
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

char ch[1000][1000];
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
           cin>>ch[i][j];
        }
    }
    int res=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(ch[i][j] =='v' && ch[i+1][j]=='^'){
                swap(ch[i][j],ch[i+1][j]);
                //debugn("a");
                ++res;
            } else if(ch[i][j]=='>' && ch[i][j+1] =='<'){
                swap(ch[i][j],ch[i][j+1]);
                //debugn("b");
                ++res;
            }else if(ch[i][j]=='^' && ch[i-1][j]=='v'){
                swap(ch[i][j],ch[i+1][j]);
                ++res;
            }else if(ch[i][j]=='<' && ch[i][j-1]=='>'){
                swap(ch[i][j],ch[i][j-1]);
                ++res;
            }
        }
    }
    debugn(res);

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
