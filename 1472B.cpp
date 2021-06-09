#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x,tong;
    cin>>t;
    while(t--)
    {
        cin>>n;
        tong =0;
        int dem1=0,dem2=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            tong+=x;
            if(x==1) dem1++;
            else dem2++;
        }

        if(tong&1) cout<<"NO"<<"\n";
        else{
            if(dem1%2!=0) cout<<"NO\n";
            else{
                    if(dem1==0 && n%2!=0) cout<<"NO\n";
                    else cout<<"YES\n";
            }
        }
    }
return 0;
}
