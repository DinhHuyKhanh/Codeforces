#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 27/1/2022
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
#define TC  0
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

int dp[120][120];
int R,C, GR, GC, LR, LC;
void build()
{
    for(int i=0; i<120; ++i)
    {
        for(int j=0; j<120; ++j)
        {
            dp[i][j]=1e9;
        }
    }
}

void sol()
{
    for(int i=3; i<=R+2; ++i)
    {
        for(int j=3; j<=C+2; ++j)
        {
            dp[i][j]=min(dp[i][j], min(dp[i-2][j+1] +1, dp[i-2][j-1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+2][j+1] +1, dp[i+2][j-1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+1][j+2] +1, dp[i+1][j-2]+1));
            dp[i][j]=min(dp[i][j], min(dp[i-1][j+2] +1, dp[i-1][j-2]+1));
        }
    }

    for(int i=R+2; i>2; --i)
    {
        for(int j=C+2; j>2; --j)
        {
            dp[i][j]=min(dp[i][j], min(dp[i-2][j+1] +1, dp[i-2][j-1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+2][j+1] +1, dp[i+2][j-1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+1][j+2] +1, dp[i+1][j-2]+1));
            dp[i][j]=min(dp[i][j], min(dp[i-1][j+2] +1, dp[i-1][j-2]+1));
        }
    }
    for(int j=C+2; j>2; --j)
    {
        for(int i=R+2; i>2; --i)
        {
            dp[i][j]=min(dp[i][j], min(dp[i-2][j+1] +1, dp[i-2][j-1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+2][j-1] +1, dp[i+2][j+1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+1][j+2] +1, dp[i+1][j-2]+1));
            dp[i][j]=min(dp[i][j], min(dp[i-1][j-2] +1,dp[i-1][j+2]+1));
        }
    }
    for(int j=3; j<=C+2; ++j)
    {
        for(int i=3; i<=R+2; ++i)
        {
            dp[i][j]=min(dp[i][j], min(dp[i-2][j+1] +1, dp[i-2][j-1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+2][j-1] +1, dp[i+2][j+1]+1));
            dp[i][j]=min(dp[i][j], min(dp[i+1][j+2] +1, dp[i+1][j-2]+1));
            dp[i][j]=min(dp[i][j], min(dp[i-1][j-2] +1, dp[i-1][j+2]+1));
        }
    }
}
void solve()
{
    while(cin>>R>>C>>GR>>GC>>LR>>LC)
    {
        build();
        dp[LR+2][LC+2]=0;
        sol();

        if(dp[GR+2][GC+2]==1e9)
        {
            cout<<"impossible\n";
        }
        else
        {
            cout<<dp[GR+2][GC+2]<<endl;
        }

    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(TC)
    {
        int T;
        cin>>T;
        while(T--) solve();
    }
    else
    {
        solve();
    }
    return 0;
}
