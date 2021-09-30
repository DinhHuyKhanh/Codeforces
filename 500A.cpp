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
    int n,t,ok=0;
    cin>>n>>t;
    vector<int> a(n+1,0);
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    int i;
    for( i=1;i<n;){
        if(i==t){
            ok=1;
        }
        i+=a[i];
    }
    if(i==t) ok=1;

    if(ok==1){
        cout<<"YES\n";
    }else cout<<"NO\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
