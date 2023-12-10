
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p1,p2,p4;
   vector<int>v(8),b(8);
   cin>>v[3];
    cin>>v[5];
     cin>>v[6];
     cin>>v[7];
     v[1]=v[3]^v[5]^v[7];
     v[2]=v[3]^v[6]^v[7];
     v[4]=v[5]^v[6]^v[7];
     for(int i=1;i<8;i++)
     {

         cout<<v[i]<<" ";
     }
     cout<<endl;
     for(int i=1;i<8;i++)
     {
         cin>>b[i];
     }
     if(b[1]==v[1] && b[2]==v[2] && b[4]==v[4])
     {
         cout<<"there is no error"<<endl;


     }
     else
     {

         cout<<" there is error at ";

         if(b[1]!=v[1]) cout<<"1"<<endl;
         else if(v[2]!=b[2] ) cout<<2<<endl;
         else cout<<3<<endl;
     }



    return 0;
}
