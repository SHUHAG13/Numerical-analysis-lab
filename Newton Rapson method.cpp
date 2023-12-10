#include<bits/stdc++.h>
using namespace std;
#define f(x) pow(x,3)-3*x-5
#define df(x) 3*pow(x,2)-3
int main()
{
    float x0;
    cin>>x0;
    float error;
    cin>>error;
    float x,f,df,f1;
    int count=0;
    do
    {
        f=f(x0);
        df=df(x0);
        x=x0-(f/df);
        x0=x;
        f1=f(x);
        count++;
        cout<<count<<" x: "<<x<<endl;

    }while(abs(f1)>error);
    cout<<"\n Root is "<<x<<endl;
}
