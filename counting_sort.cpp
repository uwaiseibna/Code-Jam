#include<bits/stdc++.h>

using namespace std;


void counting_sort(int a[], int N, int size)
{
    int b[N];
    for(int i=0;i<N;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        b[a[i]]+=1;
    }
    for(int i=0;i<N;i++)
    {
        if(b[i]!=0)
        {   
            if(b[i]==1)
            {
                cout<<i<<endl;
            }
            else
            {
                while(b[i]>0)
                {
                    cout<<i<<endl;
                    b[i]--;
                }
            }
        }
    }
}

int main()
{
    int a[]={5,8,9,4,1,2};
    int n =sizeof(a)/sizeof(a[0]);
    counting_sort(a,10, n);
}