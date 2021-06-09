#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        int res,i=0;
        while(w%2!=1 || h%2!=1)
        {
            if(w%2==0)
            {
                w=w/2;
                i++;
            }
            if(h%2==0)
            {
                h=h/2;
                i++;
            }
        }
        res = pow(2,i);
        if(res>=n) cout<<"YES\n";
        else cout<<"NO\n";
    }


return 0;
}
