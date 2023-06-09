#include<bits/stdc++.h>
// @artistic_coder
using namespace std;


int majority(int arr[], int n)
{
    //using Boyer Moore's voting algorithm
    int count = 0;
    int ele;

    for(int i = 0; i<n; i++)
    {
        if(count==0)
        {
            count=1;
            ele = arr[i];
        }
        else if(ele == arr[i])
        {
            count++;
        }
        else count--;
    }

    count = 0;
    for(int i = 0; i<n; i++)
    {
        if(ele==arr[i])count++;
    }
    if(count>(n/2))return ele;
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 7, 3, 6,5, 4};
    int s = (sizeof(arr)/sizeof(int));
    cout<<majority(arr, s)<<endl;
    return 0;
}