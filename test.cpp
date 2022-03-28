#include<bits/stdc++.h>

using namespace std;

void test_swap(int *a)
{
    swap(a[0],a[0]);
    swap(a[1],a[3]);
}

int main()
{
    int a[]= {1,2,3,4};
    cout<< a[0]<<" "<< a[1]<< " "<< a[2]<< " "<< a[3]<< endl;
    test_swap(a);
    cout<< a[0]<<" "<< a[1]<< " "<< a[2]<< " "<< a[3]<< endl;
}