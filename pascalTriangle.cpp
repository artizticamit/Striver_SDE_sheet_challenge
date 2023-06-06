#include<bits/stdc++.h>
// @artistic_coder
using namespace std;

vector<vector<long long int>> pascalTriangle(int n)
{
    vector<vector<long long int>> dp(n, vector<long long int>(n, 0));
    for(int i = 0; i<n; i++)
    {
        dp[i][0] = 1;
        dp[0][i] = 1;
    }

    for(int i = 1; i<n; i++)
    {
        for(int j = 1; j<n; j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    vector<vector<long long int>> ans;

    for(int i = 0; i<n; i++)
    {
        vector<long long int> temp;
        for(int j = 0; j<=i; j++)
        {
            temp.push_back(dp[i-j][j]);
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    
    return 0;
}