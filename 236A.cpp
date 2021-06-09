#include<bits/stdc++.h>

using namespace std;

int kt(char s,string s1)
{
    int dem=0;
        for(int i=0;i<s1.size()+1;i++)
        {
            if(s1[i]==s) dem++;
        }
    return dem;
}
int check(string s,string s1)
{
    int dem;
  for(int i=0;i<s.size();i++)
  {
      if(kt(s[i],s1)==0) {s1=s1+s[i];}
  }
    return s1.size();
}
int main(){
string s,s1;
cin>>s;
if(check(s,s1)%2==0) cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;
return 0;
}
