#include <bits/stdc++.h>

using namespace std;

int F(int n){
    int res=0;
    if(n==1){
        res=1;
    }else{
        res = F(n-1) + (n-1)*4;
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    int res= F(n);
    cout<<res;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
