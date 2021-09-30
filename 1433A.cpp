#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a=1,b=2,c=3,d=4;
    string test;
    cin>>test;
    int res = (int) test[0] -48;
    if(test.size()==1){
        cout<<res*10 - b-c-d<<"\n";
    }else if(test.size()==2){
        cout<<res*10 -c-d<<"\n";
    }else if(test.size()==3){
        cout<<res*10-d<<"\n";
    }else{
        cout<<res*10<<"\n";
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}
