#include<bits/stdc++.h>
using namespace std;

struct activity
{
    int start, finish;
};

bool activitysort(activity one, activity two)
{
    return(one.finish<two.finish);
}

void selectactivity(activity a[], int size)
{
    sort(a,a+size,activitysort);
    int i =0;
    cout<<"{"<<a[i].start<<","<<a[i].finish<<"}"<<endl;

    for(int j=1;j<size;j++)
    {
        if(a[j].start>=a[i].finish)
        {
            cout<<"{"<<a[j].start<<","<<a[j].finish<<"}"<<endl;
            i=j;
        }
    }

}

int main()
{
    activity a[]= {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int size = sizeof(a)/sizeof(a[0]);
    selectactivity(a,size);
}