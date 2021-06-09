
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n,m,c,res;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>m>>c;
        if(m>c){
            res++;
        }else if(m<c){
            res--;
        }
    }
    if(res<0) cout<<"Chris";
    else if(res>0) cout<<"Mishka";
    else cout<<"Friendship is magic!^^";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
