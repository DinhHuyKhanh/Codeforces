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
    int cnt1=0,cnt2=0,cnt3=0,a,b;
    cin>>a>>b;
    for(int i=1;i<=6;i++){
        int  y=abs(i-b) , x=abs(i-a);
            if(x>y) cnt3++;
            else if(x<y)cnt1++;
            else cnt2++;
    }
    cout<<cnt1<<" "<<cnt2<<" "<<cnt3;
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
