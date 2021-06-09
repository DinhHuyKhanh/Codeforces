
#include <bits/stdc++.h>

using namespace std;
long even,x, tp=0, police=0;
void solve(){
    cin>>even;
    for(int i=0;i<even;i++){
        cin>>x;
       if(x<0){
            if(police>0){
                police--;
            }else{
                tp++;
            }
       }
       else{
            police+=x;
       }
    }
    cout<<tp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();


return 0;
}
