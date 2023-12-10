 #include<bits/stdc++.h>
using namespace std;
#define  f(x) 1/(1+x*x)
int main()
{
   double lower ,upper;
   cin>>lower>>upper;
   double interval;
   cin>>interval;
   double step=(upper-lower)/interval;
   double ans=f(lower)+f(upper);

   for(double i=1;i<interval;i++)
   {

       double x=lower+i*step;
       if((int)i%2!=0)ans+=4*f(x);
       else ans=ans+2*f(x);


   }
    cout<<ans*step/3<<endl;
}

