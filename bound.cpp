#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector<int> &arr, int key)
{
    int start = 0;
    int end = (arr.size() - 1);
    int nxtgreater = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            nxtgreater = mid;
            return nxtgreater;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            nxtgreater = mid;
            end = mid - 1;
        }
    }

    return nxtgreater;
}

int upper_bound(vector<int> &arr, int key)
{
    int start = 0;
    int end = (arr.size() - 1);
    int nxtgreater = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            nxtgreater = mid;
            end = mid - 1;
        }
    }

    return nxtgreater;
}

int main()
{
    vector<int> v = {2, 4, 6, 7, 8, 9, 11, 23};
    cout << upper_bound(v, 9);

    return 0;
}
