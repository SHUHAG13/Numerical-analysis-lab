#include<bits/stdc++.h>
using namespace std;
#define f(x) pow(x,3)-2*x-5
int main()
{
    float a,b;
    cout<<"Enter positive and negative range";
    cin>>a>>b;
    float error;
    cout<<"Enter error :";
    cin>>error;
    float Fa,Fb,Fc,c;
    int count =0;
    do
    {
        Fa=f(a);
        Fb=f(b);
        c=(Fb*a-Fa*b)/(Fb-Fa);
        Fc=f(c);
        if(Fc>0)a=c;
        else b=c;
        count++;
        cout<<count<<" C :"<<c<<" F(c):"<<Fc<<endl;
    }while(abs(Fc)>error);
    cout<<"\n Root is"<<c<<endl;


}

