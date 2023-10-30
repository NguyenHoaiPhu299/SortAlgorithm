#include <iostream>
using namespace std;

int Partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int i = l - 1;
	for (int j = l; j <= r - 1; j++)
	{
		if (pivot >= arr[j])
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[r], arr[i + 1]);
	return i + 1;
}

void QuickSort(int arr[], int l, int r)
{
	int q = Partition(arr, l, r);
	Partition(arr, l, q - 1);
	Partition(arr, q + 1, r);
}

int main()
{
	int arr[1000]; int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	QuickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}