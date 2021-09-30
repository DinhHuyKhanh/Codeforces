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
    ll n,cnt=0;
    cin>>n;
    bool stt=1;
    while(stt){
        if(n%2==0){
            n/=2;
            stt=0, cnt++;
        }else if(n%3==0){
            n/=3;
            n*=2;
            stt=0, cnt++;
        }else if(n%5==0){
            n/=5;
            n*=4;
            stt=0, cnt++;
        }
        stt= (stt)? 0:1;
    }
    cout<<((n==1)?cnt:-1)<<'\n';
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
