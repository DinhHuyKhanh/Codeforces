#include<bits/stdc++.h>

using namespace std;


int main(){
string s;
int n;
cin>>n;
cin>>s;
int R=0,B=0,G=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='B'&&s[i+1]=='B') B++;
    if(s[i]=='R'&&s[i+1]=='R') R++;
    if(s[i]=='G'&&s[i+1]=='G') G++;
 }
 cout<<B+R+G<<endl;
return 0;
}
