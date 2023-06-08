#include<bits/stdc++.h>
// @artistic_coder
using namespace std;

void printArray(vector<int> &a)
{
    for(int i =0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(), intervals.end());
    int prev = 0, curr = 0;
    int n = intervals.size();
    int start, end;
    vector<vector<int>> ans;
    start = intervals[0][0];
    end = intervals[0][1];
    int last_flag = 0;
    for(int i = 1; i<n; i++)
    {

        if(end>=intervals[i][0])
        {

            if(end<intervals[i][1])
            {
                end = intervals[i][1];  
            }
            last_flag = 1;
        }
        else
        {
            vector<int> temp;
            temp.push_back(start);
            temp.push_back(end);

            start = intervals[i][0];
            end = intervals[i][1];

            ans.push_back(temp);
        }
    }
    if(last_flag || n==1)
    {
        vector<int> temp;
        temp.push_back(start);
        temp.push_back(end);
        ans.push_back(temp);
    }
    
    return ans;

}

int main()
{
    vector<vector<int>> arr;
    int n;cin>>n;
    for(int i = 0; i<n; i++)
    {
        vector<int> temp;
        for(int j = 0; j<2; j++)
        {
            int x;cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    arr = mergeIntervals(arr);
    printMatrix(arr);

    return 0;
}
