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
    int n=s.size(),cnt=0,res=0,stt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && stt==1) cnt++;
        if(s[i]=='1' ){
            stt=1;
            res+=cnt;
            cnt=0;
        }
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
