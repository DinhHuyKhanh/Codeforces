#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int tong1=0,tong2=0,tong3=0,a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;
        tong1+=a;
        tong2+=b;
        tong3+=c;
    }
    if(tong1==0 && tong2==0 && tong3==0) cout<<"YES";
    else cout<<"NO";
return 0;
}
