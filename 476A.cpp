#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,m,res=0;
    cin>>n>>m;
    if(n<m){
        cout<<"-1";
        return;
    }
    res= n/m;
    for(int i=1;;i++){
        if(res%m==0 && 2*res >= n){
            break;
        }
        res++;
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
