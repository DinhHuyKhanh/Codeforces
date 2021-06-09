#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string s=" ";
    int res1=0,res2=0;
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s3.size();j++)
        {
            if(s1[i]==s3[j])
            {
                res1++;
                s3[j]=s[0];
                break;
            }
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        for(int j=0;j<s3.size();j++)
        {
            if(s2[i]==s3[j])
            {
                res2++;
                s3[j]=s[0];
                break;
            }
        }
    }

    if(res1+res2==s3.size()) {
        if(res1==s1.size()&&res2==s2.size()) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";



return 0;
}
