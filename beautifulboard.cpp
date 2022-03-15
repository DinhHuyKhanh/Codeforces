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
#define TC  0
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

int a[100][100], use[100][100];

ll sol(vector<int> b){
    ll ans=1e9;
    for(int i=1;i<=26;++i){
        ll res=0;
        for(int j=0;j<sz(b);++j){
            res+= min(min(26-b[j]+i, abs(b[j] -i)), abs(i-26)+ b[j]);
        }
        ans=min(ans,res);
    }
    //cout<<ans<<" ans \n";
    return ans;
}
void solve()
{
    int R,C;
    cin>>R>>C;
    char ch;
    for(int i=1;i<=R;++i){
        for(int j=1; j<=C ; ++j){
            cin>>ch;
            a[i][j]= ch-'A'+1;
        }
    }

    ll res=0;
    for(int i=1;i<=R;++i){
        for(int j=1; j<=C ; ++j){
            if(use[i][j]) continue;
            //cout<<i<<" "<<j<<endl;
            vector<int> b;
            map<pair<int,int>, int> mp;
            b.pb(a[i][j]);
            use[i][j]=1;
            mp[{i,j}]++;
            if(mp[{R-i+1,j}]==0){
                b.pb(a[R-i+1][j]);
                use[R-i+1][j]=1;
                mp[{R-i+1,j}]++;
            }
            if(mp[{i,C-j+1}]==0){
                b.pb(a[i][C-j+1]);
                mp[{i,C-j+1}]++;
                use[i][C-j+1]=1;
            }
            if(mp[{R-i+1,C-j+1}]==0){
                b.pb(a[R-i+1][C-j+1]);
                mp[{R-i+1, C-j+1}]++;
                use[R-i+1][C-j+1]=1;
            }
            res+= sol(b);
            //cout<<" res "<<res<<endl;
        }
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
        //cout<<('Z'-'A' +1)<<endl;
        solve();
    }
return 0;
}
