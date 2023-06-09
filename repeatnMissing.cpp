#include<bits/stdc++.h>
// @artistic_coder
using namespace std;



pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int> cnt(n+1, 0);
	for(int i = 0; i<n; i++)
	{
		cnt[arr[i]]++;
	}
	int M,R;
	for(int i =1; i<=n; i++)
	{
		if(cnt[i]==0)M=i;
		if(cnt[i]==2)R=i;
	}
	return {M, R};
	
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(2);
    pair<int, int> p = missingAndRepeating(arr, arr.size());
    cout<<"M = "<<p.first<<", R = "<<p.second<<endl;
    return 0;
}