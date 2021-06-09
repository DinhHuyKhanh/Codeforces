#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    unsigned long long n;

    while(t--){

        cin>>n;

        if(n <=2) cout<<"NO\n";
        else {

        if(n%2==1){
            cout<<"YES\n";
        }
        else{
            while(n%2==0){
                    n/=2;
                    if(n==2) break;
            }

            if(n%2==1){
                cout<<"YES\n";
            }else cout<<"NO\n";
        }
        }
    }

return 0;
}
