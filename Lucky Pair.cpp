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

void solve()
{
  int n;
  cin >> n;
  vector<ll> a(n);
  set<ll> st;
  map<ll, int> cur;
  ll mx = 0;
  for (int i = 0; i<n; i++){
    cin >> a[i];
    mx = max(a[i], mx);
    if (a[i] != 1)
        st.insert(a[i]);
    cur[a[i]]++;
  }
  ll ans = cur[1] * (cur[1] - 1)/2;
  for (auto i: st){
    ll temp = cur[i];
    for (int j = i * i; j <= mx; j *= i){
        if (st.find(j) != st.end()){
            temp += cur[j];
            cur[j] = 0;
        }
    }
    ans += temp * (temp - 1)/2;
  }
  cout << ans;

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
