#include<bits/stdc++.h>

using namespace std;

int partition(int a[], int low, int high)
{
    int i= (low-1);
    int pivot =a[high];
    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot)
            {
                swap(a[++i],a[j]);
            }
    }
    swap(a[++i],a[high]);
    return i;
    
}
int quick_sort( int a[],int low, int high)
{
   if (low<high)
    {
        int pi = partition(a, low, high);
        
        quick_sort(a,low, pi-1);
        quick_sort(a,pi+1,high);
    }
}
int main()
{
    int a[]={5,8,9,4,1,2};
    int n =sizeof(a)/sizeof(a[0]);
    quick_sort(a,0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}