#include<bits/stdc++.h>

using namespace std;

int main(){
int n,t;
cin>>n;
string s;
while(n--)
{
   cin>>t>>s;
   sort(s.begin(),s.end());
   cout<<s<<endl;
}

return 0;
}
