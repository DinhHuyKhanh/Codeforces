#include<bits/stdc++.h>

using namespace std;


int main(){
int a[4];
int res=0;
for(int i=0;i<4;i++)
{
    cin>>a[i];
}

for(int i=0;i<3;i++)
    for(int j=i+1;j<4;j++)
    {
        if(a[i]==a[j]) { res++; break; }
    }


cout<<res;
return 0;
}
