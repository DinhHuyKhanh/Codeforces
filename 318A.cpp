#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,k,soLe=0,soChan=0;
    cin>>n>>k;
    if(n%2==0){
        soLe=n/2;
        soChan=n/2;
    }
    else{
        soLe=n/2+1;
        soChan=n/2;
    }
    if(k<=soLe)// k chẵn
    {
        cout<<1+2*(k-1);
    }else{ // k lẻ
        k-=soLe;
        cout<<2+2*(k-1);
    }


return 0;
}
