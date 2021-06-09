#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97) d++;
        else d--;
    }
    if(d>=0)
    {
        for(int i=0;i<s.size()+1;i++)
            if(s[i]<97) s[i]=s[i]+32;
    }
    else
    {
        for(int i=0;i<s.size()+1;i++)
            if(s[i]>=97) s[i]=s[i]-32;
    }
    cout<<s<<endl;
    return 0;
}
