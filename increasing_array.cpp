#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n; cin>>n;
    long a[n];
    long cont = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<n; i++)
    {
        if(a[i] < a[i-1])
        {
            cont += a[i-1] - a[i];
        }
    }
    cout<<cont<<endl;
    return 0;
}