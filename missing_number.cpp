#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    long long c = 0, s;
    vector<long long> numeros(n-1);
    for(int i =0; i<n-1; i++)
    {
        cin>> numeros[i];
        c +=numeros[i]; 
    }
    s = (n*(n+1)/2) - c;
    cout<<s<<endl;
    return 0;
}