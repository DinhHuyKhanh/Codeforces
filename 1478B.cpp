/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

bool kt(int x, int d){
    if(x>10*d) return true;
    while(x>=0){
        if(x%10==d) return true;
        else x-=d;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,q,d;
    cin>>t;
    while(t--){
        cin>>q>>d;
        int x;
        while(q--)
        {
            cin>>x;
            cout<<(kt(x,d)?"YES\n":"NO\n");
        }
    }


return 0;
}
