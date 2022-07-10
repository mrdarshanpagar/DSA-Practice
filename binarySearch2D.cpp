#include<iostream>
#include<vector>
using namespace std;

vector<int> binarySearchRow2D(vector<vector<int>> &vec, int n, int m, int key, int row)
{
    int l = 0, r = m - 1, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (key == vec[row][mid])
            return {row, mid};
        if (key < vec[row][mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return {-1,-1};
}

vector<int> binarySearch2D(vector<vector<int>> &vec, int n, int m, int key)
{
    int l = 0, r = n - 1, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (key == vec[mid][0])
            return {mid, 0};
        else if (key == vec[mid][m - 1])
            return {mid, m - 1};
        else if (key > vec[mid][0] && key < vec[mid][m - 1])
        {
            vector<int> ans = binarySearchRow2D(vec, n, m, key, mid);
            return ans;
        }

        else if (key < vec[mid][0])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return {-1,-1};
}
int main()
{

    vector<vector<int>> vec = {{4, 6, 8, 9, 11},
                               {20, 22, 28, 29, 31},
                               {36, 38, 50, 61, 63},
                               {64, 66, 100, 122, 128}};

    vector<int> ans = binarySearch2D(vec, 4, 5, 122);

    for (int &i : ans)
        cout << i << " ";

    return 0;
}