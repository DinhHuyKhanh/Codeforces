/**
 *    @author:  huykhanh
 *    @created: 4/2/2021
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,x,y,res,a;
    cin>>t;
    while (t--){
            res=0;
        cin>>x>>y;
         a= abs(x-y);
        res = (x<y)? 2*x:2*y;
        res+= (a!=0)?2*a-1:a;
        cout<<res<<endl;
    }


return 0;
}
