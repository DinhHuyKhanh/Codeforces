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
    int n,m;
    cin>>n>>m;
    int a=2;
    int b=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i&1) cout<<"#";
            if(i%2==0){
                 if(i==a && j==m){
                    cout<<"#";
                    a+=4;
                 }
                 else if(i==b && j==1){
                    cout<<"#";
                    b+=4;
                 }else  cout<<".";
            }
        }
        cout<<"\n";
    }


return 0;
}
