#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n; cin>>n;
    vector<ll> numbers;

    for(int i = 1; i<n; i++)
    {
        cin>>numbers[i];
    }
    for(int i = 1; i<n; i++)
    {
        cout<<numbers[i];
        cout<<endl;
    }

    next_permutation( numbers.begin(), numbers.end());

     for(int i = 1; i<n; i++)
    {
        cin>>numbers[i];
        if(numbers[i] - numbers[i-1] == 1 and numbers[i] - numbers[i-2])
        {
            cout<<"NOT POSIBLE"<<"\n";
        }
    }



    return 0;
}