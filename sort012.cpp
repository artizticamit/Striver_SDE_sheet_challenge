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

void sort012(int *arr, int n)
{
   //   Write your code here
   int one =0, zero = 0, two = 0;
   for(int i = 0; i<n; i++)
   {
      if(arr[i]==0)zero++;
      else if(arr[i]==1)one++;
      else two++;
   }
   int i = 0;
   for(i =0 ; i<zero; i++)
   {
      arr[i] = 0;
   }
   for(i; i<one+zero; i++)
   {
      arr[i] = 1;
   }
   for(i; i<one+zero+two; i++)
   {
      arr[i] = 2;
   }
   
}


int main()
{
    int *arr = new int(6);
    arr[0] = 2;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] =0;
    arr[4] =1;
    arr[5] = 2;
    for(int i = 0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort012(arr, 6);
    for(int i = 0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}