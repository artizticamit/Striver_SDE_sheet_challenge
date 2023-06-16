#include <bits/stdc++.h>
// @artistic_coder
using namespace std;

int lengthOfLongestConsecutiveSubsequence(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    int cnt = 1, maxx = 0;
    for(int i = 1; i<n; i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            cnt++;
        }
        else if(arr[i]==arr[i-1])continue;
        else cnt=1;
        maxx = max(maxx, cnt);
    }
    return maxx;
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    // int target;cin>>target;
    while (n--)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout<<lengthOfLongestConsecutiveSubsequence(arr, arr.size())<<endl;
    return 0;
}