#include <iostream>
using namespace std;

int add(int a[], int num, int b[] = NULL);

int add(int a[], int num, int b[])
{
	int sum = 0;

	for (int i = 0; i < num; i++)
		sum += a[i];

	if (b != NULL) {
		for (int i = 0; i < num; i++)
			sum += b[i];
	}

	return sum;
}

void main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}