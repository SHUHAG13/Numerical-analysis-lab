#include<bits/stdc++.h>
using namespace std;
#define f(x) pow(x,3)-2*x-5
int main()
{
    float posi,neg;
    cout<<"Enter positive and negative range";
    cin>>posi>>neg;
    float error;
    cout<<"Enter error :";
    cin>>error;
    float root,f1;
    int count =0;
    do
    {
        root=(posi+neg)/2;
        f1=f(root);
        if(f1>0)posi=root;
        else neg=root;
        count++;
        cout<<count<<" x :"<<root<<" f1(root):"<<f1<<endl;
    }while(abs(f1)>error);
    cout<<"\n Root is"<<root<<endl;


}
