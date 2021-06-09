#include<bits/stdc++.h>

using namespace std;
int check(string s)
{
    int dem=0;
    for(int i=0;i<s.size()+1;i++)
        if(s[i]=='4'|| s[i]=='7') dem++;
    return dem;
}

int main()
{
    unsigned long long a;
    cin>>a;
    string s;
    ostringstream convert;
    convert << a;
    s=convert.str();
   if(check(s)==7 || check(s)==4) cout<<"YES";
   else cout<<"NO";
}
