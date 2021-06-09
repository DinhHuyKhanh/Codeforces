/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;
int pow(int a, int b){
    int ans=1;
    while(b){
        if(b&1) ans=(ans*a);
        a=(a*a);
        b>>=1;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int x;
        if(n<=10){
                cout<<1<<endl;
            cout<<n<<" ";
        }else{
            vector<int> a;
            for(int i=4;i>=0;i--){
                x= pow(10,i);
                if(n/x!=0){
                    a.push_back((n/x)*x);
                }
                n%=(pow(10,i));
            }
            cout<<a.size()<<"\n";
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }


return 0;
}
