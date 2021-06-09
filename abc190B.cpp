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
    int n,s,d;
    cin>>n>>s>>d;
    int st=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x < s){
            if(y>d) st=1;
        }
    }
    if(st==1) cout<<"Yes";
    else cout<<"No";

return 0;
}
