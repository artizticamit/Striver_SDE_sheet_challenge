#include<bits/stdc++.h>
// @artistic_coder
using namespace std;
// #define mod 1e9+7

// (X^y)%mod;
int modularExp(int x, int y, int mod)
{
    long new_x = x;
    // long long new_y = y;
    long res = 1;
    while(y>0)
    {
        if(y%2==1)
        {
            res =((res%mod)*(new_x%mod))%mod;
        }

        y = y>>1;
        new_x = ((new_x%mod)*(new_x%mod)%mod);
    }
    return (int)res%mod;
}

int main()
{
    int x, y;
    cin>>x>>y;
    int mod = 1e9;
    cout<<modularExp(x, y, mod)<<endl;
    return 0;
}