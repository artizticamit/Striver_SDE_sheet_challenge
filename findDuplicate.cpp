#include<bits/stdc++.h>
// @artistic_coder
using namespace std;

void printMatrix(vector<vector<int>> &mat)
{
    for(int i = 0; i<mat.size(); i++)
    {
        for(int j = 0; j<mat[0].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int findDuplicate(vector<int> &arr, int n)
{
    unordered_map<int, int> m;
    for(int x:arr)
    {
        m[x]++;
    }
    for(auto x:m)
    {
        if(x.second>1)
        {
            return x.first;
        }
    }
    return 0;
}


int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(2);
    cout<<findDuplicate(a, 3)<<endl;
    return 0;
}