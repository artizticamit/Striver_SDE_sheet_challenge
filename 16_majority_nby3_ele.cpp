#include<bits/stdc++.h>
// @artistic_coder
using namespace std;


vector<int> majority(vector<int> &arr)
{


    //using Extended Boyer Moore's voting algorithm




    int count1 = 0, count2=0;
    int ele1, ele2;

    for(int i = 0; i<arr.size(); i++)
    {
        if(count1==0 && ele2!=arr[i])
        {
            count1=1;
            ele1 = arr[i];
        }
        else if(count2==0 &&ele1!=arr[i])
        {
            count2 = 1;
            ele2 = arr[i];
        }
        else if(ele1==arr[i])
        {
            count1++;
        }
        else if(ele2 == arr[i])
        {
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    vector<int> res;
    count1 = 0;
    count2 = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        if(ele1==arr[i])count1++;
        if(ele2==arr[i]) count2++;
    }
    int minn = (arr.size()/3)+1;
    if(count1>=minn)res.push_back(ele1);
    if(count2>=minn)res.push_back(ele2);
    return res;
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(3);
    vector<int> res = majority(arr);
    for(int x:res)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}