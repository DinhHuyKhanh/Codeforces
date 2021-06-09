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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());

        int st=0;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>1){
                cout<<"NO\n";
                st=1;
                break;
            }
        }
        if(st==0) cout<<"YES\n";
    }


return 0;
}
