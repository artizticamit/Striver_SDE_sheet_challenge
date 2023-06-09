#include <bits/stdc++.h> 

using namespace std;

long long merge(long long *arr,vector<int>&temp,int left,int mid,int right)
{
    cout<<"inside merge\n\n";
    long long inv_count=0;
    int i = left;
    int j = mid;
    int k = left;
    while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while(i <= mid - 1)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return inv_count;
}

long long merge_Sort(long long *arr,vector<int>&temp,int left,int right)
{
    cout<<"inside merge_sort() \n";
    long long mid,inv_count = 0;
    if(right > left)
    {
        mid = (left + right)/2;

        inv_count += merge_Sort(arr,temp,left,mid);
        inv_count += merge_Sort(arr,temp,mid+1,right);

        inv_count += merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    cout<<"inside inversion\n";
    long long count = 0;
    vector<int> temp(n);

    count += merge_Sort(arr, temp,0, n-1);
    
    
    return count;
}

int main()
{

    long long *arr = new long long(4);
    arr[0] = 3;
    arr[1] = 2;
    arr[2] = 1;
    // arr[3] = 5;
    // arr[0] = 1;
    // arr[0] = 1;
    vector<int> temp(3);

    cout<<merge_Sort(arr,temp,0, 3)<<endl;

    return 0;
}