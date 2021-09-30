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

    int l1,l2,r1,r2;
void solve()
{

    cin>>l1>>r1>>l2>>r2;
    for(int i=l1;i<=r1;i++){
        for(int j=l2;j<=l2;j++){
            if(i!=j){
                cout<<i<<" "<<j<<"\n";
                return;
            }
        }
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
