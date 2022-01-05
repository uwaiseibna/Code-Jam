#include<bits/stdc++.h>

using namespace std;

void print_equi_indices(int *a, int size)
{
    int sum=0;
    int reversesum= 0;
    bool set =false;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    cout<<"Indices: ";
    for(int i=0;i<size;i++)
    {
        if(i!=0)
        {
            reversesum+=a[i-1];
            
        }
        sum-=a[i];
        
        if(reversesum == sum)
        {
            cout<<i;
            set = true;
            if(i!=(size-1))
            {
                cout<<", ";
            }
        }
    }
    if(set == false)
    {
        cout<<"None";
    }
    
}

int main()
{
    int a[]= {0, -3, 5, -4, -2, 3, 1, 0};
    int size = sizeof(a)/sizeof(a[0]);
    print_equi_indices(a,size);
}