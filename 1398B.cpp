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

void solve()
{
    string s;
    cin>>s;
    vector<int> a;
    int dem=0,n=s.size(),res=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') dem++;
        if(s[i]=='0') {
            if(dem!=0) a.pb(dem);
            dem=0;
        }
    }
    a.pb(dem);

    n = a.size();
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++){
        if(i%2==0) res += a[i];
    }
    cout<<res<<endl;

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
