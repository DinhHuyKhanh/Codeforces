#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,x,res=0,maxx=1;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>a[i-1]) {
                res++;
        }
        else{
            maxx = max(res,maxx);
            res=1;
        }
    }
    maxx = max(res,maxx);
    cout<<maxx;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
