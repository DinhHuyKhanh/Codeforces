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
const bool testcase=1;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int cnt=0;
    s=" "+s;
    while(1){
        bool stt=0;
        for(int i=1;i<n;i++){
            if(s[i]=='A' && s[i+1]!='A'){
                s[i+1]='A';
                i++;
                stt=1;
            }
        }
        if(stt==1) cnt++;
        else break;
    }
    cout<<cnt<<'\n';
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
