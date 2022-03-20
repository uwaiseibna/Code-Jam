#include<bits/stdc++.h>

using namespace std;


void sievephi(int n)
{
    int phi[100006], mark[1000006];
    int i,j;
    for(i=1;i<=n;i++)
    {
        phi[i]=i;
    }
    phi[1]=1;
    mark[1]=1;

    for(i=2;i<=n;i++)
    {
        if(!mark[i])
        {
            for(int j=i;j<=n;j++)
            {
                mark[j]=1;
                phi[j]= phi[j]/i*(i-1);
            }
        }
    }
    for(int k=1;k<=n;k++)
    {
        cout<<phi[i]<<endl;
    }

}

int main()

{
    sievephi(10);
}