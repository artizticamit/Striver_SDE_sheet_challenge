#include<bits/stdc++.h>
// @artistic_coder
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int row = 0, col = 0;
    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0] == 0)
        {
            col = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (matrix[0][i] == 0)
        {
            row = 1;
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

// row wise check
    for (int i = 1; i < m; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }


// column-wise check
    for (int j = 1; j < n; j++)
    {
        if (matrix[0][j] == 0)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // check for the upper most row
    if (row == 1)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[0][i] = 0;
        }
    }

    // check for the left most column.
    if (col == 1)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][0] = 0;
        }
    }
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

int main()
{
    vector<vector<int>> matrix;

    for (int i = 0; i < 3; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 4; j++)
        {
            temp.push_back(j + i);
        }
        matrix.push_back(temp);
    }
    printMatrix(matrix);

    setZeros(matrix);
    printMatrix(matrix);
    return 0;
}