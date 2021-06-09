#include<bits/stdc++.h>

using namespace std;

int main(){
   string s;
   string s1="aoyeui";
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
        if(s[i]<=90) s[i]=s[i]+32;
        if(s[i]!=s1[0] && s[i]!=s1[1]&&s[i]!=s1[2]&&s[i]!=s1[3]&&s[i]!=s1[4] && s[i]!=s1[5])
        {
            cout<<"."<<s[i];
        }
   }
return 0;
}
