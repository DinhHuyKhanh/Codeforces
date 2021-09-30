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
    int n,a,b;
    string s;
    cin>>n>>a>>b;
    cin>>s;
    ll res=a*n+b;
    if(n==1){
        cout<<res<<"\n";
        return;
    }
        if(b>=0){
            res = (a+b)*n;
        }
        else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0') cnt++;
                if(s[i]=='1' && cnt!=0){
                    res += b;
                    cnt=0;
                }
            }
            if(cnt!=0) res+=b;

            ll ans  = a*n + b;
             cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1') cnt++;
                if(s[i]=='0' && cnt!=0){
                    ans += b;
                    cnt=0;
                }
            }
            if(cnt!=0) ans+=b;
            res=max(ans,res);
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
