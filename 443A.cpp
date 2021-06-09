#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
char a[]={"qwertyuiopasdfghjklzxcvbnm"};
string s;
char ch[1000];
int res=0;
int i=0;
do{
    cin>>ch[i];
    s=ch[i];
    i++;
}while(s!="}");

    for(int k=0;k<26;k++)
    {
        for(int j=1;j<i;j+=2)
        {
            if(a[k]==ch[j])
            {
                res++;
                break;
            }
        }
    }
    cout<<res;


return 0;
}
