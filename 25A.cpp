#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n;
    map<int,int> mp;
    int chan,le;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x%2]++;
        if(x%2==0){
            chan=i+1;
        }else le=i+1;
    }
    if(mp[0]==1) cout<<chan;
    else cout<<le;

return 0;
}
