#include<bits/stdc++.h>
using namespace std;

void move_zeros(int a[], int size)
{
    int zerocount=0;
    int i=0;
    while((i+zerocount)<size)
    {
        if(a[i+zerocount]==0)
        {
            zerocount++;
            continue;
        }
        else
        {
            a[i]=a[i+zerocount];
            i++;
        }
    }
    for(;i<size;i++)
        {
            a[i]=0;
        }
    for (int i=0;i<size;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int a[]= { 6, 0, 8, 2, 3, 0, 4, 0, 1};
    int size = sizeof(a)/sizeof(a[0]);
    move_zeros(a,size);
}