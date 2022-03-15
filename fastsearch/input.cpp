#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 22/2/2022
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
#define NAME "test2."

//ifstream fi (NAME"in");
ofstream fo (NAME"in");
int GetRandom(int minz,int maxz){
    return minz + (int)(rand()*(maxz-minz+1.0)/(1.0+RAND_MAX));
}
void solve()
{
    int n;
    n=1e5;
    fo<<n<<endl;
    int x;
    int L=-1e9, R= 1e9;
    for(int i=0;i<n;++i)
    {
        x = GetRandom(L, R);
        fo<<x<<" ";
    }
    fo<<endl;
    int m=1e5;
    fo<<m<<endl;
    L=-1e9,R=1e9;
    while(--m){
        int l, r;
        l= GetRandom(L, R);
        r= GetRandom( L, R);
        if(l>r) swap(l,r);
        fo<<l<<" "<<r<<endl;
    }




}
int main() {
     srand((unsigned int)time(NULL));
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
