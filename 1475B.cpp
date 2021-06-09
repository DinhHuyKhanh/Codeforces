#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;

        while(n>=2020){
            if(n%2020==0) n=n%2020;
            else if(n%2021==0) n%=2021;
            if(n%2==0 && n>=2020) n-=2020;
            else if(n%2==1 && n>=2020) n-=2021;
        }
        if(n==0) cout<<"YES\n";
        else cout<<"NO\n";
    }

return 0;
}
