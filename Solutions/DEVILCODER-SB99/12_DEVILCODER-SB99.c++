#include <bits/stdc++.h>
using namespace std;

void merge(int *array, int *pos, int *result, int start, int mid, int end)
{
    int temp[100007];
    for (int i = start; i <= end; ++i)
    {
        temp[i] = pos[i];
    }
    int cur = start;
    int leftcur = start;
    int rightcur = mid + 1;
    while (leftcur <= mid && rightcur <= end)
    {
        if (array[temp[leftcur]] <= array[temp[rightcur]])
        {
            pos[cur] = temp[leftcur];
            result[pos[cur]] += rightcur - mid - 1;
            ++leftcur;
            ++cur;
        }
        else
        {
            pos[cur] = temp[rightcur];
            ++cur;
            ++rightcur;
        }
    }
    while (leftcur <= mid)
    {
        pos[cur] = temp[leftcur];
        result[pos[cur]] += end - mid;
        ++cur;
        ++leftcur;
    }
    while (rightcur <= end)
    {
        pos[cur] = temp[rightcur];
        ++cur;
        ++rightcur;
    }
}

void mergesort(int *array, int *pos, int *result, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergesort(array, pos, result, start, mid);
    mergesort(array, pos, result, mid + 1, end);
    merge(array, pos, result, start, mid, end);
}

int main()
{
    int array[100007];
    int pos[100007];
    int result[100007];
    memset(result, 0, sizeof(int) * 100007);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
        pos[i] = i;
    }
    mergesort(array, pos, result, 0, n - 1);
    /*for (int i = 0; i < n; ++i)
    {
        cout << array[pos[i]] << " ";
    }
    cout << endl;*/
    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}