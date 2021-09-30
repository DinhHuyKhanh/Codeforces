#include<bits/stdc++.h>

using namespace std;
int st[100000+7][25];
int getMin(int l,int r){
    int j= 31- __builtin_clz(r-l+1); 
    return min(st[l][j], st[r- (1<<j) +1 ][j]);
}

void solve(){
    int n,q,r,l;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>st[i][0];
    }

    for(int j=1;(1<<j)<=n; ++j){
        for(int i=0;i+(1<<j) <=n; ++i){
            st[i][j]= min(st[i][j-1], st[i+(1<<(j-1))][j-1]);
        }
    }

    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<(getMin(l,r))<<'\n';
    }

}

int main(){
    solve();
}