
#include <bits/stdc++.h>

using namespace std;

int l,r;
 void solve(){
    cin>>l>>r;

    if(l*2 > r) {
    cout<<-1<<" "<<-1<<"\n";
    return;
    }
    cout<<l<<" "<<2*l<<"\n";
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
