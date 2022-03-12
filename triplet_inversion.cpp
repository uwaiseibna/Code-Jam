#include<bits/stdc++.h>

using namespace std;

bool comp_two(int a, int b)
{
    return(a>b);
}

void count_triplet(int a[], int size)
{
   int b[size];
   stack<int> s;
   for(int i=0;i<size;i++)
   {
       b[i]=a[i];
   }
   sort(b,b+size);
   int counter = 3;
   for(int i=0;i<size;i++)
   {
       if (a[i]>= b[counter])
       {
           s.push(a[i]);
           counter--;
       }
   }
   while(!s.empty())
   {
       cout<<s.top();
       s.pop();
   }
}

int main()
{
    int a[]= {7,5,4,1,3};
    int size = sizeof(a)/sizeof(a[0]);
    count_triplet(a,size);
}