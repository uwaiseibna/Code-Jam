#include<bits/stdc++.h>

using namespace std;

void zerosubarray(int a[], int size)
{
    unordered_set<int> set;
    int sumcount(0);
    int sum(0);
    set.insert(2);
    for(int i=0;i<size;i++)
    {
        if(a[i]==2)
        {
            sumcount++;
        }
        sum+=a[i];
        
        if(set.find(sum-sumcount*2)!= set.end())
        {
            sumcount++;  
        }
        set.insert(sum);
    }
    cout<<sumcount;
}

int main()
{
    int a[]={2,-1,3,1,-7,5};
    int size= sizeof(a)/sizeof(a[0]);
    zerosubarray(a,size);
}