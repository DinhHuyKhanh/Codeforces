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
    vector<int> a(5,0);
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    int s=a[1]+a[2]+a[3]+a[4];
    sort(all(a));
    if(s&1){
        cout<<"NO\n";
        return;
    }else{
        s/=2;
        for(int i=0;i<3;i++){
            for(int j=i+1;j<4;j++){
                for(int k=j+1;j<5;j++){
                    if(a[i]+a[j]+a[k]==s){
                        cout<<"YES\n";
                        return;
                    }
                }
            }
        }
    }
    cout<<"NO\n";
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
