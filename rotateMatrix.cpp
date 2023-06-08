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

void printMatrix(vector<vector<int>> &mat)
{
    for(int i = 0; i<mat.size(); i++)
    {
        for(int j = 0; j<mat[0].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int left = 0, right= m-1,top = 0, bottom = n-1;
    int temp = 0, curr = 0;
    while(top<bottom && left<right)
    {
        //left  to right at level top
        temp = mat[top][left];
        for(int i = left+1; i<=right; i++)
        {
            curr = mat[top][i];
            mat[top][i] = temp;
            temp = curr;
        }
        top++;

        // from top to bottom
        for(int i = top; i<=bottom; i++)
        {
            curr = mat[i][right];
            mat[i][right] = temp;
            temp = curr;
        }
        right--;

        // right ot left at the botto
        for(int i = right; i>=left; i--)
        {
            curr = mat[bottom][i];
            mat[bottom][i] = temp;
            temp = curr;
        }
        bottom--;

        // bottom to top at left side
        for(int i = bottom; i>=top; i--)
        {
            curr = mat[i][left];
            mat[i][left] = temp;
            temp = curr;
        }
        left++;
        mat[top-1][left-1] = temp;
    }
}


int main()
{
    
    
    vector<vector<int>> mat;
    for(int i = 0; i<4; i++)
    {
        vector<int> temp;
        for(int j = 0; j<4; j++)
        {
            temp.push_back(i+j+1);
        }
        mat.push_back(temp);
    }
    printMatrix(mat);
    rotateMatrix(mat, mat.size(), mat[0].size());
    printMatrix(mat);
    return 0;
}