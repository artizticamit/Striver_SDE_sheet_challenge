#include<bits/stdc++.h>
// @artistic_coder
using namespace std;


bool search(vector<vector<int>> &mat, int target)
{
    int m = mat.size(), n = mat[0].size();
    int low =  0, high = (m*n)-1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(mat[mid/n][mid%n]==target)return true;
        if(target>mat[mid/n][mid%n])
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}


int main()
{
    vector<vector<int>> mat;
    int m, n;
    cout<<"enter value of M and N: ";
    cin>>m>>n;
    for(int i = 0; i<m; i++)
    {
        vector<int> temp;
        for(int j = 0; j<n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }

    int target;
    cout<<"enter target value = ";
    cin>>target;

    if(search(mat, target))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}