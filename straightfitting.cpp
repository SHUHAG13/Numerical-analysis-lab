#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[50],y[50],n;
    float p=0,q=0,r=0,s=0,rn,rp,det,da,db,a,b;
    cout<<"Enter number of input: ";
    cin>>n;
    cout<<"Enter value of x and y:";
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        p+=x[i];
        q+=y[i];
        r+=(x[i]*y[i]);
        s+=(x[i]*y[i]);
    }
    cout<<"The value of x="<<p<<endl;
    cout<<"The value of y="<<q<<endl;
    cout<<"The value of xy="<<r<<endl;
    cout<<"The value of x^2="<<s<<endl;
    det=(n*s)-(p*p);
    da=(q*s)-(p*r);
    db=(n*r)-(p*q);
    a=db/det;
    b=db/det;
    cout<<"\nThe equation is y="<<a<<"+"<<b<<endl;

}
