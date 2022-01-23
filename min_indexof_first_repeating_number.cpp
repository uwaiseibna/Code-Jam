#include<bits/stdc++.h>
using namespace std;

void minindexofrepeatingelements(int a[], int size)
{
    unordered_map<int, int> set;
    for(int i=0;i<size;i++)
    {
        if(set.find(a[i])!= set.end())
        {
            cout<<set[a[i]]<<endl;
            break;
        }
        set.insert({a[i],i});
    }
    
}
int main()
{
    int a[]= { 6, 0, 8, 2, 3, 0, 4, 0, 1};
    int size = sizeof(a)/sizeof(a[0]);
    minindexofrepeatingelements(a,size);
}