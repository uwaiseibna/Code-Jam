#include<bits/stdc++.h>
using namespace std;

void majority_element(int arr[], int size)
{
    unordered_map<int, int> a;
    for(int i=0;i<size;i++)
    {
        a[arr[i]]++;
    }
    for(auto i = a.begin(); i!=a.end(); i++)
    {
        if (i->second> (size/2))
        {
            cout<< i->first;
        }
    }
}
int main()
{
    int a[]= { 2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
    int size = sizeof(a)/sizeof(a[0]);
    majority_element(a,size);
}