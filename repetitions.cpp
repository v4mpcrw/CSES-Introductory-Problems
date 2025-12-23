#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    long largoAct = 1;
    long largomayor = 1;
    char letras = s[0];
    for(int i = 1; i<s.length(); i++)
    {
        if(s[i] == s[i-1])
        {
            largoAct++;
            if(largoAct > largomayor)
            {
                largomayor = largoAct;
                letras = s[i];
            }
        }
        else
        {
            largoAct = 1;
        }
    }
    cout<<largomayor<<endl;
    return 0;
    }