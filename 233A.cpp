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
    cin>>n;
    if(n&1){
        cout<<-1;
    }else{
        for(int i=1;i<=n/2;i++){
            cout<<2*i<<" "<<2*i-1<<" ";
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
