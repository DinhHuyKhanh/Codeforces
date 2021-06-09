#include<bits/stdc++.h>

using namespace std;
int n,dem=0,i=0;
string s,s1;

void program()
{
    cin>>n;


   while(n--)
    {
        cin>>s;
        if(s1[0]!=s[0]) dem++;
        s1=s[0];
    }
    cout<<dem;


}
/*
int dem()
{
    int dem=0;
    for(int i=0;i<s1.size()-1;i++)
    {
            if(s1[i]!=s1[i+1]) dem++;
    }
    return dem;
}
*/
int main(){

program();


return 0;
}
