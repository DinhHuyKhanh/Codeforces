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
    int res1=0,res2=0,cnt1=0,cnt2=0;
    s=" "+s;
    for(int i=1;i<=10;i++){
        if(i&1){
            if(s[i]!='0') res1++;
        }else{
            if(s[i]=='1') res1--;
        }
         cnt1++;
        if( (10-i)/2 + (10-i)%2 < res1 ) break;
    }
    for(int i=1;i<=10;i++){
        if(i&1){
            if(s[i]=='1') res2--;
        }else{
            if(s[i]!='0') res2++;
        }
        cnt2++;
        if((10-i-1)/2 + (10-i-1)%2 < res2 ) break;
    }
    cout<<min(cnt1,cnt2)<<"\n";

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
