#include<bits/stdc++.h>
using namespace std;
#define f1(x,y,z)(85-6*y+z)/27
#define f2(x,y,z)(72-6*x-2*z)/15
#define f3(x,y,z)(110-y-x)/54
int main()
{
float e;
cin>>e;
float x,y,z,x0=0,y0=0,z0=0;
float e1,e2,e3;
int count=0;
do{
x=f1(x0,y0,z0);
y=f2(x0,y0,z0);
z=f3(x0,y0,z0);
count++;
cout<<count<<") x="<<x<<"  y="<<y<<"  z="<<z<<endl;
e1=abs(x-x0);
e2=abs(y-y0);
e3=abs(z-z0);

x0=x;
y0=y;
z0=z;



}while(e1>e && e2>e  &&e3>e);
cout<<"\n Root is "<<endl<<"x="<<x<<" y="<<y<<" z="<<z<<endl;

}
