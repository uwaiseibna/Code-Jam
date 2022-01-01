#include<bits/stdc++.h>

using namespace std;

int maxprod(int *a, int size)
{
    int sm1,sml2,lrg1,lrg2=0;
    int ct1, ct2;
    for(int i=0;i<size;i++)
    {
        if(a[i]<sm1)
        {               
            sm1=a[i];
            ct1=i;           
            
        }
        if(a[i]>lrg1)
        {
            lrg1=a[i];
            ct2=i;
            
        }
    }
    for (int i=0;i<size;i++)
    {
        if(a[i]<sml2 && i!=ct1)
        {
            sml2=a[i];
        }
        if(a[i]>lrg2 && i!=ct2)
        {
            lrg2=a[i];
        }
    }
    return ((lrg1*lrg2)< (sm1*sml2)) ? (lrg1*lrg2):(sm1*sml2);
}

int main()
{
    int a[]= {-10,2,3,4,6,-4,15};
    int size = sizeof(a)/sizeof(a[0]);
    int max = maxprod(a,size);
    cout<<max<<endl; //complexity is 2n ~ ~ O(n)
}