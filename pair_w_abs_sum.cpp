#include<bits/stdc++.h>
using namespace std;
void pair_w_abs_sum(int a[], int size)
{
    int pos(0),p,n;
    int neg(0),sum(100);
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            neg=i;
            continue;
        }
        if(a[i]==0)
        {
            pos= neg+2;
            break;
        }
        else
        {
            pos+=neg;
            break;
        }
    }
    while(pos<size)
    {
        int temp;
        temp = abs(a[pos]+a[neg]);
        if(temp<sum)
        {
            sum=temp;
            p=a[pos];
            n=a[neg];
        }
        neg--;pos++;
    }
    cout<<"("<<p<<","<<n<<")"<<"sum: "<<sum;
}

int main()

{
    int a[]={-6, -5, -3, 0, 2, 4, 9};
    int size= sizeof(a)/sizeof(a[0]);
    pair_w_abs_sum(a,size);
}