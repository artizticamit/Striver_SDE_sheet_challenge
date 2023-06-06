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

vector<int> nextPermuation(vector<int> &arr, int n)
{
    int b = -1;
    for(int i = n-1; i>0; i--)
    {
        if(arr[i]>arr[i-1])
        {
            b = i-1;
            break;
        }
    }
    if(b==-1)
        sort(arr.begin(), arr.end());
    else{
        for(int i = n-1; i>b; i--)
        {
            if(arr[i]>arr[b])
            {
                swap(arr[i], arr[b]);
                break;
            }
        }
        // printArray(arr);
        sort(arr.begin() + b+1, arr.end());
    }
    return arr;
}



int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    nextPermuation(arr, arr.size());
    // sort(arr.begin()+2, arr.end());
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}