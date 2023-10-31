#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[min] > arr[j])
                min = j;
        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }
}

int main()
{
    int arr[] = {23, 78, 45, 8, 32, 56};
    SelectionSort(arr, 6);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}