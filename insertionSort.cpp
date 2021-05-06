//insert an element from unsorted array to its correct position in the sorted array

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) //we are starting from 2nd element
    {
        int current = arr[i];              // 2nd element or 1th element
        int j = i - 1;                     //0th element or 1st element
        while (arr[j] > current && j >= 0) // j should not go below 0
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}