#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int size)
{
    

    int pivot=0;
    for(int i=1;i<size;i++)
    {
        int itr=0;
        while(itr<i)
        {
            int j =i;
            if(a[j]>a[itr])
            {
                swap(a[itr],a[i]);
                j--;
            }
            itr++;
        }
    }
    for(int i =0; i<size;i++)

    {cout<<a[i]<<" ";}
}

int main()
{
    int a[]= {9,7,31,-6,0,4};
    int size= sizeof(a)/sizeof(a[0]);
    insertion_sort(a,size);
}