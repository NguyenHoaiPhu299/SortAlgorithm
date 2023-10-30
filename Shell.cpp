#include <iostream>
using namespace std;

void ShellSort(int k[], int n)
{
	int tmp;
	int i, j, h;
	h = n >> 1; // <=> h = h / 2, su dung phep dich de toi uu hoa
	while (h != 0)
	{
		for (i = h + 1; i <= n; i++)
		{
			tmp = k[i];
			j = i - h;
			while (j > 0 && k[j] > tmp)
			{
				k[j + h] = k[j];
				j = j - h;
			}
			k[j + h] = tmp;
		}
		h = h >> 1; // <=> h = h / 2
	}
}

int main()
{
	int n; cin >> n;
	int k[1001];
	for (int i = 1; i <= n; i++)
	{
		cin >> k[i];
	}
	ShellSort(k, n);
	cout << "Shell Sort: ";
	for (int i = 1; i <= n; i++)
	{
		cout << k[i] << " ";
	}
	cout << endl;
	return 0;
}