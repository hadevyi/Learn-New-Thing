#include <iostream>
using namespace std;

void main(){
	cout << "�Է��� ������ ������? ";
	int n;
	cin >> n;										// ������ ���� �Է�
	if (n <= 0) { exit(0); }
	int *p = new int[n];							// n���� ���� �迭 ���� �Ҵ�

	if (!p)	{
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		exit(0);
	}

	for (int i = 0; i < n; i++)	{
		cout << i + 1 << "��° ���� : ";			// ������Ʈ ���
		cin >> p[i];								// Ű����κ��� ���� �Է�
	}

	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += p[i];

	cout << "��� = " << sum / n << endl;

	delete[] p;										// �迭 �޸� ��ȯ
}