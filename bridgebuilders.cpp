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

char ch[100][100];
int dp[100][100];
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<100;++i){
        for(int j=0;j<100;++j) dp[i][j]=1e9;
    }

    for(int i=10;i<n+10;++i){
        for(int j=10;j<m+10;++j){
            cin>>ch[i][j];
            if(ch[i][j]=='T' ){
                dp[i][j]=0;
            }else{
                dp[i][j]=1e9;
            }
            cout<<ch[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=10;i<n+10;++i){
        for(int j=10;j<m+10;++j){
            if(ch[i][j] !='#'){
                dp[i][j] = min(dp[i][j],min(dp[i-1][j]+1,min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1))));
            }else if(ch[i][j]=='T'){
                dp[i][j]=min(dp[i-1][j]+1, min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1)));
            }
        }
    }

    for(int j=10;j<m+10;++j){
        for(int i=10;i<n+10;++i){
            if(ch[i][j] !='#'){
                dp[i][j] = min(dp[i][j],min(dp[i-1][j]+1,min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1))));
            }else if(ch[i][j]=='T'){
                dp[i][j]=min(dp[i-1][j]+1, min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1)));
            }
        }
    }

    for(int i=n+9;i>=10;--i){
        for(int j=m+9;j>=10;--j){
            if(ch[i][j] !='#'){
                dp[i][j] = min(dp[i][j],min(dp[i-1][j]+1,min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1))));
            }else if(ch[i][j]=='T'){
                dp[i][j]=min(dp[i-1][j]+1, min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1)));
            }
        }
    }

    for(int j=m+9;j>=10;--j){
        for(int i=n+9;i>=10;--i){
            if(ch[i][j] !='#'){
                dp[i][j] = min(dp[i][j],min(dp[i-1][j]+1,min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1))));
            }else if(ch[i][j]=='T'){
                dp[i][j]=min(dp[i-1][j]+1, min(dp[i+1][j]+1,min(dp[i][j-1]+1, dp[i][j+1]+1)));
            }
        }
    }

    ll res=0;
    for(int i=10;i<n+10;++i){
        for(int j=10;j<m+10;++j){
           if(dp[i][j]!=1e9) res+=dp[i][j];
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<res<<endl;



}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(TC){
        int T;
        cin>>T;
        while(T--) solve();
    }else{
        solve();
    }
return 0;
}
