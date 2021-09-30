#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=0;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    int cnt=0,i,j;
    for(i=0;i<n;i++){
        if(a[i]<=k) cnt++;
        else{
            break;
        }
    }
    for(int j=n-1;j>i;j--){
        if(a[j]<=k) cnt++;
        else break;
    }
    cout<<cnt<<"\n";
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
