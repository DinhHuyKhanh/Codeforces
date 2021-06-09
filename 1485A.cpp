/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;
/*
int solve(){
    int a,b,res,ans=10e9;
    cin>>a>>b;
    if(a<b){
        return 1;
    }

    int x,y;
    for(int i=0;i<=6;i++){
        res=0;
        x=a; y=b;
        if(y+i==1){
            continue;
        }
        while(x){
            x/=(y+i);
            res++;
            cout<<x<<" ";
        }
        ans = min(ans,res+i);
    }
    return ans;
}
*/

int solve(){
int a,b,res,ans=1e9,x,y;
cin>>a>>b;
for(int i=0;i<=9;i++){
    x=a; y=b; res=0;
    if(y+i<2) continue;
    res+=i;
    y+=i;
    while(x){
        x/=y;
        res++;
    }
    ans= min(ans,res);
}
return ans;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
return 0;
}
