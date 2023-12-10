#include<bits/stdc++.h>
using namespace std;
#define m 100
#define order 4
int main()
{
    int n;
    cin>>n;
    float x[m+1],y[m+1];
    for(int i=0;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    float value;
    cin>>value;
    float diff[m+1][order+1];
      int j;
    for(int i=0;i<n-1;i++)
    {
        diff[i][j]=y[i+1]-y[i];
    }
    for( j=2;j<=order;j++)
    {
        for(int i=0;i<=n-j;i++)
        {
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
        }
    }
    int idx=0;
    while(x[idx]<value)idx++;
    idx--;
    float h=x[1]-x[0];
    float u=(value-x[idx])/h;
    float y_value=y[idx];
    float fact_u=1.0;
    float multi=1.0;
    for(int i=1;i<order;i++)
    {
        fact_u*=u+1-i;
        multi*=i;
        y_value+=(fact_u/multi)*diff[idx][i];
    }
    cout<<y_value<<endl;

}
