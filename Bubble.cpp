#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; j > i; j--)
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
}

int main()
{
    int arr[] = {0, 7, 3, 9, -1};
    BubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}