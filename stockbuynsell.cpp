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

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int m = prices.size()-1, ans = 0;
    for(int i = prices.size()-1; i>=0; i--)
    {
        if(prices[i]>prices[m])
        {
            m = i;
        }else
        {
            int temp = prices[m]-prices[i];
            ans = max(ans, temp);
        }
    }
    return ans;
}


int main()
{
    int t;cin>>t;
    while(t--)
    {
        vector<int> prices;
        int n;
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            int x;cin>>x;
            prices.push_back(x);
        }
        cout<<maximumProfit(prices)<<endl;
    }
    
    
    return 0;
}