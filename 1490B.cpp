
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int c0=0,c1=0,c2=0,n,k;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>k;
            if(k%3==0){
                c0++;
            }
            if(k%3==1){
                c1++;
            }
            if(k%3==2){
                c2++;
            }

        }
        int res=0;
        while(c0!=c1 || c1!=c2){
            if(c1<c0){
                c0--;
                c1++;
                res++;
                }
            if(c1>c2){
                c2++;
                c1--;
                res++;
                }
            if(c0<c2){
            c2--;
            c0++;
            res++;
            }
        }
        cout<<res<<"\n";
    }
return 0;
}
