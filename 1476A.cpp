/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int64_t t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n>k)
        {
            if(n%k!=0) k=k*(n/k+1);
            else k=k*(n/k);
        }
        if(k%n==0) cout<<k/n;
        else cout<<k/n+1;
        cout<<endl;
    }

return 0;
}
