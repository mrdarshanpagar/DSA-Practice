#include <iostream>
#include <vector>
using namespace std;
#define default 10

int binarySearchRecc(int arr[], int key, int l, int r)
{

    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
            return mid;
        if (key > arr[mid])
            return binarySearchRecc(arr, key, mid + 1, r);
        else
            return binarySearchRecc(arr, key, l, mid - 1);
    }
    else
        return -1;
}

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main()
{

    return 0;
}