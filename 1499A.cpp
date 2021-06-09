
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n,k1,k2,w,b;;
    cin>>t;
    while(t--){
        cin>>n>>k1>>k2;
        cin>>w>>b;

    int x = k1+k2;
    int y = 2*n - k1-k2;

        if(w*2<= x  && b*2 <= y) cout<<"YES\n";
        else cout<<"NO\n";
    }

return 0;
}
