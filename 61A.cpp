#include<bits/stdc++.h>

using namespace std;

int main() {
string s1,s2,s;

cin>>s1>>s2;
for(int i=0;i<s1.length();i++)
{
    if((s1[i]!='0' && s1[i]!='1')||(s2[i]!='0' && s2[i]!='1'))
    {
    }
    else {
         if(s2[i]!=s1[i])
        {
            s=s+"1";
        }else s=s+"0";
    }
}
cout<<s;

return 0;
}
