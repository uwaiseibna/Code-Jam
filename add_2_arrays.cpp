#include<bits/stdc++.h>
using namespace std;

void add_2_arrays(int a[], int b[], int size1, int size2)
{

    bool flag;
    int size= max(size1,size2);
    if(size==size1)
    {
        flag=false;
    }
    else if(size==size2)
    {
        flag=true;
    }
     vector <int> V;
     int j(0);
    for(int i =0;i<size;i++)
    {
        if(flag == true)
        {
            if(i<size1)
            {
            V.push_back((a[i]+b[i]));
            }
            else 
            {
                V.push_back (b[i]);
            }
        }
        if(flag==false)
        {
            if(i<size2)
            {
            V.push_back((a[i]+b[i]));
            }
            else 
            {
                V.push_back (a[i]);
            }
        }
        if(V.back()>=10)
        {
            int temp =V.back();
            V.back()=temp/10;
            V.push_back(temp%10);
        
        }      
    }
    
    for(auto i=V.begin();i!=V.end();i++)
    {
        cout<<*i<<endl;
    }
}


main()
{
    int a[]= {23, 5, 2, 7, 87};
    int b[]={4, 67, 2, 8 };
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);

    add_2_arrays(a,b,size1,size2);
}

