#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:11/3/2022
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

char a[200][200];
void solve()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<150;++i){
        for(int j=0;j<150;++j) a[i][j]=' ';
    }
    for(int i=0;i<n;++i){
       for(int j=0;j<m;++j){
        cin>>a[i][j];
       }

    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
           int cnt=0;
           if(a[i][j]=='1') ++cnt;
           if(a[i+1][j]=='1') ++cnt;
           if(a[i][j+1]=='1') ++cnt;
           if(a[i+1][j+1]=='1') ++cnt;
            if(cnt==3){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";



}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    srand((unsigned int)time(NULL));
    if(TC){
        int T;
        cin>>T;
        while(T--) solve();
    }else{
        solve();
    }
return 0;
}
