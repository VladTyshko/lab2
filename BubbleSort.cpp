#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j + 1 < n; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			} else if ((arr[j] == arr[j + 1]) && (arr[j] < arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
