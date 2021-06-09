#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2,a,b;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s1>>s2;
        int bc= lcm(s1.size(),s2.size());
        a=s1;
        b=s2;
        for(int i=1;i<bc/s1.size();i++)
        {
            a +=s1;
        }
        for(int i=1;i<bc/s2.size();i++)
        {
            b+=s2;
        }
       if(a==b) cout<<a<<"\n";
       else cout<<-1<<endl;
    }

return 0;
}
