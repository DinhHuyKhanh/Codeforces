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
        int n;
        int x[8]={111111111,11111111,1111111,111111,11111,1111,111,11};
        cin>>n;
        while(n>10){
            for(int i=0;i<8;i++){
                if(n%x[i]==0){
                    cout<<"YES\n";
                    return;
                }
            }
            for(int i=7;i>=0;i--){
                if(n>=x[i]){
                    n-=x[i];
                    break;
                }
            }
        }
        if(n==0) cout<<"YES\n";
        else cout<<"NO\n";
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
