#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;

void solve()
{
    int X,Y,M,res,ans=10e9;
    cin>>X>>Y>>M;
    int N = M/Y +1;
    for(int i=0;i<N;i++){
        res = M;
        res -= i*Y;
        res -= X*(res/X);
        ans= min(res,ans);
    }
    cout<<M-ans;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
