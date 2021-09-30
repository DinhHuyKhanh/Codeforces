#include <bits/stdc++.h>

using namespace std;
using ll = long long;
uint64_t n,ans, mdconst, t[4]={0,1,1,1}, k[4]={0,1,0,1}, tg[4];

void mp2(uint64_t x[], uint64_t y[], uint64_t z[]){
    tg[0]=(x[0]*y[0]+x[1]*y[2])%mdconst;
    tg[1]=(x[0]*y[1]+x[1]*y[3])%mdconst;
    tg[2]=(x[2]*y[0]+x[3]*y[2])%mdconst;
    tg[3]=(x[2]*y[1]+x[3]*y[3])%mdconst;
    z[0] = tg[0];
    z[1]= tg[1];
    z[2]= tg[2];
    z[3]= tg[3];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    mdconst=1000000000;
    n+=1;
    while(n)
    {
        if(n&1) mp2(k,t,k);
        mp2(t,t,t);
        n>>=1;
    }
    ans = k[2]%mdconst;
    cout<<ans;


return 0;
}
