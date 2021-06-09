#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

long long lcm(long long a, long long b)
{
    long long temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
int snt( int x){
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t,a;
    cin>>t;
   while(t--)
    {
        long long a;
        cin>>a;
        long long a1,a2,a3,a4;
            a1=1+a;
            a2=a1+a;
            int status1,status2;
            while(1)
            {

                if(snt(a1)==0)
                {
                    a1++;
                    status1 =0;
                } else status1=1;
                if(snt(a2)==0 || a2<(a1+a)) {
                        a2++;
                        status2=0;
                }else status2=1;
                if(status1 ==1 && status2 ==1) break;

            }

           cout<<lcm(a1,a2)<<endl;
    }
return 0;
}
