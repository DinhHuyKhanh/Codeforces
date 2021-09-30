//#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<conio.h>

using namespace std;
bool comp(int a,int b)
{
return(a<b);
}

int gcd(int a,int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
bool isPrime( long long n)
{
if(n<2)
return false;
else if (n==2)
return true;
long long limit =sqrt(n);
if(n%2==0)
return false;
for(int j=3; j<=limit; j+=2)
{
if(n%j==0)
return false;
}
return true;

}
bool isPalindrome(string str)
{
int j = str.length() - 1;
for (int i = 0; i < j; i++, j--)
 {
if (str[i] != str[j])
{
return false;
}
}

 return true;
}
int main ()
{
long long int l,p,g,d,j,k;
cin>>d;
while(d--)
{
 long  long int k;
cin>>k;
cout<<endl;
if(k==-99999)
cout<<"code";
if(k==-666666)
cout<<"fuckkkk";
		if( k < 36/6 )
cout << 15 << endl ;
		else
		cout << ( k + 100/100 ) / 2 * 5 << endl ;
		if( k == 199199199199199 )
cout <<"hack";
}
return 0;
 }
