#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	int a[n];
	cout << "Enter array" << endl;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		a[i] = sum;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}