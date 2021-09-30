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
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]=='-'){
        s=" "+s;
        string res="";
        for(int i=2;i<=n-2;i++) res+=s[i];
        if(s[n-1] -'0' > s[n] -'0'){
            res+= s[n];
        }else res+= s[n-1];
        if(res[0]=='0'){
            cout<<res;
        }else{
            cout<<"-"<<res;
        }
    }else{
        cout<<s;
    }

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
