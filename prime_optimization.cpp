#include<bits/stdc++.h>

using namespace std;

void prime_optimized (int n)
{
    //using sieve of eratosthenes
    unordered_map<int, int> S;
    S.insert({1,2});
    for (int i =3; i<=n;i+=2)
    {
        S.insert({i,i});
    }
    for (int i =3;i*i<=n;i+=2)
    {
       
       
        for (int j = i*i;j<n;j+=i*2)
            {
                if(S.find(j)!= S.end())
                {
                    S[j]=n+1;
                }
            }   
        
    }
    for (auto i = S.begin(); i!=S.end();i++)
    {
        if(i->second!=n+1)
        {
            cout<<i->second<<endl;
        }
    }
}

int main()
{
    prime_optimized(20);
}