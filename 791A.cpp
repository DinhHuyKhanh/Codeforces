#include<bits/stdc++.h>

using namespace std;
int kt(int a, int b, int x)
{
    int c=0,d=0;
    c=pow(3,x)*a;
    d=pow(2,x)*b;
  //  cout<<c<<" "<<d<<endl;
    if(c>d) return 1;
    else
        return 0;
}
int main(){
int a,b;
int x=1;
cin>>a>>b;
while(1)
{
    if(kt(a,b,x)==1) break;
    else x++;
}
cout<<x<<endl;


return 0;
}
