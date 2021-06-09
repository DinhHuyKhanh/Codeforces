
#include <bits/stdc++.h>

using namespace std;
int n,k,s;
 void solve(){
    s=4*60;
    cin>>n>>k;
    s-=k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        a[i]=a[i-1] + i*5;
    }

    for(int i=n;i>=0;i--){
        if(a[i]<=s){
            cout<<i<<endl;
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
