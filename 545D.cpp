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
    int n,sum=0,res=0;
    cin>>n;
    vector<int> vals(n);
    for(auto &x: vals) cin>>x;
    sort(all(vals));
    for(int i=0;i<n;i++){
        if(sum <= vals[i]){
            sum+=vals[i];
            res++;
        }
    }
    cout<<res;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
