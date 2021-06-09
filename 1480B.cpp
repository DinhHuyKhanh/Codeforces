/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

void kq(){
     long long A,B,n;
    cin>>A>>B>>n;
    vector< long long> a(n+1) ;
    vector< long long>  b(n+1);
    //vector<pair<long long, long long>> vt(n);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++) cin>>b[i];

     unsigned long long damage= 0;
    int c=0;
    for(int i=1;i<=n;i++){
        c=(b[i]%A!=0)? (1+(b[i]/A)):(b[i]/A);

        damage += (int64_t) a[i]*c;
    }
    B -= damage;
    string ans;
    for(int i=1;i<=n;i++){
     if(B+a[i]>0){
            cout<<"YES\n";
        return;
     }
    }
    cout<<"NO\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        kq();
    }


return 0;
}
