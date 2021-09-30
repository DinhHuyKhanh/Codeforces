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
    int a[3]={0,0,0},x,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[i%3]+= x;
    }
    int Max= max({a[0],a[1],a[2]});
    if(Max==a[0]){
        cout<<"chest";
        return;
    }
    if(Max==a[1]){
        cout<<"biceps";
    }else cout<<"back";
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
