#include <bits/stdc++.h>
// @artistic_coder
using namespace std;


int merge(vector<int> &arr, int left, int mid, int right)
{
    int i, j;
    i = left;
    j = mid;

    int count = 0;

    for (int i = left; i <= mid - 1; i++)
    {
        while (j <= right && arr[i] > 2 * arr[j])
        {
            j++;
        }
        count += (j - (mid));
    }

    j = mid;

    vector<int> temp;
    while (i < mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {

            temp.push_back(arr[j]);
            j++;
            // count += (mid - i );  // Increment the count for inversions
        }
    }

    while (i < mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= right)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = left; k <= right; k++)
    {
        arr[k] = temp[k - left];
    }

    return count;
}

int merge_Sort(vector<int> &arr, int left, int right)
{
    int count = 0;

    if (left < right)
    {
        int mid = (left + right) / 2;

        count += merge_Sort(arr, left, mid);

        count += merge_Sort(arr, mid + 1, right);

        count += merge(arr, left, mid + 1, right);
    }
    return count;
}

int main()
{

    vector<int> arr;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << merge_Sort(arr, 0, arr.size()-1) << endl;

    return 0;
}