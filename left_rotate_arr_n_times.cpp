#include<bits/stdc++.h>

using namespace std;

void rotate_arr_n_times(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        int n,b[size];
        cout<<"enter the value of n: ";
        cin>>n;
        for(int i=0;i<size;i++)
        {
            b[i]=a[(i+n)%size];
        }
        a=b;
        for(int i=0;i<size;i++)
        {
            cout<< a[i]<<endl;
        }
    }
}

main()
{
    int a[]={1,2,3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    rotate_arr_n_times(a,size);
}