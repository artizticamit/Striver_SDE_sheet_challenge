#include <bits/stdc++.h>
// @artistic_coder
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
   for(int i = 0; i<n; i++)
   {
        for(int j = n-1; j>=i; j--)
        {
            if(arr[i]+arr[j]==s)
            {
                ans.push_back({arr[i], arr[j]});
            }
            else if(arr[i]+arr[j]<s)
            {
                break;
            }
        }
   }
    return ans;
}

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

// -3 -2 2 3 3
// s = 0;
// output: {(-3, 3), (-3, 3), (-2,2)}

int main()
{

    vector<int> arr;
    int n;
    cin >> n;
    int s;cin>>s;
    while (n--)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<vector<int>> ans = pairSum(arr, s);
    printMatrix(ans);

    return 0;
}