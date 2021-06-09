#include<bits/stdc++.h>
#define NAME""
using namespace std;


int main(){
int n,k;
cin>>n>>k;
string s1,s2;
cin>>s1;
while(k--)
{
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        if(s1[i]=='B',s1[j]=='G')
        {
            string tg;
            tg=s1[i];
            s1[i]=s1[j];
            s1[j]=tg[0];
            i++;
        }
    }
}
cout<<s1;



return 0;
}
