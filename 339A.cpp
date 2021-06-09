#include<bits/stdc++.h>
#define NAME""
using namespace std;


int main(){
string s,a,a1,a2,a3;
int dem1=0,dem2=0,dem3=0;
cin>>s;
for(int i=0;i<s.size()+1;i++)
{
    if(s[i]=='1') dem1++;
    if(s[i]=='2') dem2++;
    if(s[i]=='3') dem3++;
}
    while(1)
    {

        if(dem1>0) { a1=a1+ "1"; dem1--;}
        if(dem1>0) {a1=a1+"+"; }
        if(dem2>0) {a2 = a2+"2"; dem2--;}
        if(dem2>0) {a2=a2+"+";}
        if(dem3>0) {a3 =a3+"3"; dem3--;}
        if(dem3>0) {a3 =a3+"+";}
        if(dem1==0 &&dem2==0 &&dem3==0)
        {
            if(a1.size()==0) {
            if(a2.size()>0) {
            a=a+a2;
            if(a3.size()>0) a=a+"+"+a3;
            }
            else{
                a=a3;
            }
            }
            else
            {
            if(a1.size()>0) a=a+a1;
            if(a2.size()>0) a=a+"+"+a2;
            if(a3.size()>0) a=a+"+"+a3;
            }


            break;
        }
    }
    cout<<a<<endl;
    return 0;
}
