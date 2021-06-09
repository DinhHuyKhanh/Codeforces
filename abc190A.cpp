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
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b){
        if(c==0) cout<<"Aoki";
        else cout<<"Takahashi";
    }else{

    while(1){
        a--;
        b--;
        if(a==0 || b==0) break;
    }
    if(a==0) cout<<"Aoki";
    else cout<<"Takahashi";
    }


return 0;
}
