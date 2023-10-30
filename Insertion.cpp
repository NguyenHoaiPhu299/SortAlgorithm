#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
	for (int i = 2; i <= n; i++)
	{
		int tmp = arr[i];
		while (tmp < arr[i - 1] && i > 1)
		{
			arr[i] = arr[i - 1];
			i--;
		}
		arr[i] = tmp;
	}
}

void InsertionSort2(int arr[],int n)
{
	for (int i = 2; i <= n; i++) // Chen gia tri ki vao day khoa k1 ... kn de tro thanh mot day sap xep
	{
		int tmp = arr[i]; // Giu lai gia tri khoa chen
		int j = i - 1;
		while (j > 0 && tmp < arr[j]) // So sanh gia tri can chen voi lan luot cac khoa k
		{
			arr[j + 1] = arr[j]; // Day lui gia tri kj ve phia sau mot vi tri, tao ra khoang trong tai vi tri j
			j--;
		}
		arr[j + 1] = tmp; // Dua gia tri chen vao khoan trong moi tao ra
	}
}

void InsertionSortBinarySearch(int arr[], int n)
{
	int inf, sup, median;
	int tmp;
	for (int i = 2; i <= n; i++)
	{
		tmp = arr[i]; // Giu lai gia tri ki
		inf = 1;  sup = i - 1; // Tim cho chen gia tri tmp vao doan tu k(inf) toi k(sup + 1)
		while (sup >= inf)
		{
			median = (inf + sup) / 2;
			if (tmp < arr[median])
				sup = median - 1;
			else inf = median + 1;
		}
		/*Dich cac phan tu tu k(inf) toi k(i - 1) lui sau mot vi tri*/
		arr[inf] = tmp;
	}
}

int main()
{
	int arr[1001];
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	InsertionSort2(arr, n);
	cout << "Insertion Sort: ";
	for (int i = 1; i <= n; i++)
		cout << arr[i] << " ";
	return 0;
}