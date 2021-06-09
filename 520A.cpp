#include<bits/stdc++.h>

using namespace std;

int main(){
    string ch="qwertyuiopasdfghjklzxcvbnm";
    string s;
    int n;
    cin>>n>>s;
    if(n<20) cout<<"NO";
    else{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<97)
        {
            s[i]=s[i]+32;
        }
    }
    sort(ch.begin(),ch.end());
    sort(s.begin(),s.end());
    int res=0;
    for(int i=0;i<ch.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(ch[i]==s[j])
            {
                res++;
                break;
            }
        }
    }
    if(res==ch.size()) cout<<"YES";
    else cout<<"NO";
    }


return 0;
}
