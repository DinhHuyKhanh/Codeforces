
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n,res=0,tong=0;
    cin>>n;
    if(n%2==1){
        res=3;
        tong=1;
        n -= 3;
    }
    tong += n/2;
    cout<<tong<<endl;
    for(int i=1;i<=n/2;i++){
        cout<<2<<" ";
    }
    if(res==3) cout<<res;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
