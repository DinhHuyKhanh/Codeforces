
#include <bits/stdc++.h>

using namespace std;
long res,a,b;
void solve(){
    cin>>a>>b;
    if(a<=b){
        a *=2;
    }else{
        b*=2;
    }
    if(a<=b) cout<<b*b<<endl;
    else cout<<a*a<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();

return 0;
}
