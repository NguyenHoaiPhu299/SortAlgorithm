#include <iostream>
using namespace std;

void Heapify(int arr[], int i, int n)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        Heapify(arr, largest, n);
    }
}

void HeapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(arr, i, n);

    // while (n != 1)
    // {
    //     swap (arr[0], arr[n - 1]);
    //     Heapify(arr, 0, n - 1);
    //     n--;
    // }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[i], arr[0]);
        Heapify(arr, 0, i);
    }
}

int main()
{
    int arr[] = {1, 7, 4, 0, -2};
    int n = 5;
    HeapSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}