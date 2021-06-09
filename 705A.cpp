#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
string s1= "I hate";
string s2= "I love";
string s =s1;
if(n==1) s=s+ " it";
for(int i=1;i<n;i++)
{
    if(i%2==0)
    {
        s=s+" that " + s1;
    }
    else
    {
        s=s+" that "+s2;
    }
    if(i==n-1) s=s+" it";
}
cout<<s;

return 0;}
