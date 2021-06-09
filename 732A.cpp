
#include <bits/stdc++.h>

using namespace std;
long k,r;
 void solve(){
    cin>>k>>r;
    for(int i=1;;i++){
        if((k*i)%10 ==r || (k*i)%10 ==0){
            cout<<i;
            return;
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
