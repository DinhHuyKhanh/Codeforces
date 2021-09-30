#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
int n,s,k,x;
void solve()
{
    cin>>n>>s>>k;
    set<int> st;
    int start = (s>1000) ? s-1000: 1;
    int ends = (s+1000 < n) ? s+1000 : n;
    int res=99999;
    for(int i=0;i<k;i++){
        cin>>x;
        st.insert(x);
    }
    for(int i=start; i<=ends;i++ ){
        if(st.count(i)){
            continue;
        }
        res= min(res,abs(s-i));
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
