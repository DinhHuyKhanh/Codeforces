#include<bits/stdc++.h>

using namespace std;


int main(){
int n;
string s;
cin>>n>>s;
int dem=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='A') dem++;
    else dem--;
}
if(dem>0) cout<<"Anton"<<endl;
else if(dem<0) cout<<"Danik"<<endl;
else cout<<"Friendship"<<endl;
}
