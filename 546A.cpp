#include<bits/stdc++.h>

using namespace std;

int main(){
int32_t k,n,w;
int32_t S=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++)
{
    S=S+i*k;
}
if(n>=S) cout<<0<<endl;
if(n<S) cout<<S-n<<endl;

return 0;
}
