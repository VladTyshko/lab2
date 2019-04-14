#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = n; i >= 0; --i)
	{
		int maxIndex = i;
		for (int j = i; j >= 0; --j)
		{
			if (a[j] > a[maxIndex])
			{
				maxIndex = j;
			}
		}
		swap(a[i], a[maxIndex]);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
}
