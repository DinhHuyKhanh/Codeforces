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
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    ll ans=2*t1 + v1*s, res= 2*t2 + v2*s;
    if(ans==res){
        cout<<"Friendship";
    }else{
        cout<<(ans<res? ("First"): ("Second"));
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
