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

long long maxSubarraySum(int arr[], int n)
{
    long long maxx = INT_MIN,sum = 0;
    
    for(int i = 0; i<n; i++)
    {
        if(sum>=0)
        {
            sum+=arr[i];
            maxx = max(maxx, sum);
        }
        else
        {
            sum=0;
            i--;
        }
    }
    maxx = max(0ll,maxx);
    return maxx;
}


int main()
{
    // int arr[] = {10, 20, -30, 40 , -50 , 60};
    int arr[] = {1, 2, 7, -4,3, 2, -10, 9, 1};
    // cout<<sizeof(arr)/sizeof(int)<<endl;
    cout<<maxSubarraySum(arr, sizeof(arr)/sizeof(int))<<endl;

    return 0;
}