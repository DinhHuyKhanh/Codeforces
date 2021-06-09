#include<bits/stdc++.h>

using namespace std;

int main(){
float n,p,s=0;

cin>>n;
for(int i=0;i<n;i++)
{
     cin>>p;
    s=s+p;
}
s=s/n;
printf("%0.8f",s);

return 0;
}
