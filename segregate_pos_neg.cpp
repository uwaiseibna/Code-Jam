#include<bits/stdc++.h>
using namespace std;

void seg_pos_neg(int a[], int size)
{
    int pos_index=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            swap(a[i],a[pos_index]);
            pos_index++;
        }
            
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int a[]= {5,-4,2,-1,0,9};
    int size = sizeof(a)/sizeof(a[0]);
    seg_pos_neg(a,size);
}