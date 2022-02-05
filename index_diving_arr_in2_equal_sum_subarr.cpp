#include<bits/stdc++.h>

using namespace std;

int divarray(int a[], int size, int* first, int* last)
{
    unordered_map<int,int> mp;
    int sumleft(0), sumright(0);
    for(int i=0;i<size;i++)
    {
        sumleft+=a[i];
        sumright+=a[(size-1)-i];
        mp.insert({sumleft,i});
        if((mp.find(sumright)!=mp.end()))
        {
            int key=mp[sumright];
            if((size-1-i-key)== 2)
            {
            *first=key;
            *last=(size-1-i);
            }
        }
        mp.insert({sumright,(size-1-i)});
        
    }

}
int main()
{
    int a[]= {-1,6,3,1,-2,3,3};
    int first =0;
    int last =0;
    int size= sizeof(a)/sizeof(a[0]);
    divarray(a,size,&first,&last);
    cout<<"left subarray: ";
    for(int i=0;i<=first;i++){
        cout<<a[i];
    }
    cout<<endl<<"right subarray: ";
    for(int i=last;i<size;i++)
    {
        cout<<a[i];
    }
}