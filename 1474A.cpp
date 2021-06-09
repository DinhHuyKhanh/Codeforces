#include<bits/stdc++.h>

using namespace std;


int main(){

   string s2,s3,s;
    int t,a;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin>>s;
        int x= (int)s[0]-47;
        cout<<1;
        for(int i=1;i<n;i++)
        {
            a=(int)s[i]-48;
            if(x==0)
            {
                x=a+1;
                cout<<1;
            }
            else if(x==1)
            {
                if(a==1)
                {
                    cout<<1;
                    x=a+1;
                }else {
                    cout<<0;
                    x=a+0;
                }
            }
            else if(x==2)
            {
                if(a==1) {
                    cout<<0;
                    x=a+0;
                }
                else{
                    cout<<1;
                    x=a+1;
                }
            }
        }
        cout<<"\n";
    }

return 0;
}
