
/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int maxs,mins,vt1=-1,vt2=-1;
    while(t--){
            int n,h;
        cin>>n>>h;
        vector<int> a(n);

        for(auto &x: a){
            cin>>x;
        }

       /* if(n<=2){

         if(n==1) cout<<-1<<"\n";
         if(n==2){
            if(a[0]<a[1]){
                h-= (a[1]-a[0]);
                if(h>0) cout<<-1<<endl;
                else cout<<1<<"\n";
            }else cout<<-1<<endl;
         }
        }
        else{ */
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                a[i] += 1;
                h--;
                if(h<=0){
                cout<<i+1<<"\n";
                break;
                }
                i=-1;
            }
        }
        if(h>0) cout<<-1<<"\n";

    }

return 0;
}
