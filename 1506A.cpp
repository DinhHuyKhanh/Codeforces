
#include <bits/stdc++.h>

using namespace std;
int64_t t,n,m,x;
void solve(){
    cin>>n>>m>>x;

    int64_t i,j,res;
    i=(x%n==0)?n:x%n;
    j=(x%n==0)?x/n:(x/n+1);
    res=i*m-(m-j);
    cout<<res<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--) solve();

return 0;
}
