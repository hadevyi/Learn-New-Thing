#include <iostream>
using namespace std;

int add(int a, int b) { return 1 + b; }
//int add(int a, int &b) { b = b + a; return b; }

void main(){
	int s = 10, t = 20;

	cout << add(s, t) << endl; //�׳� ������ ���� ������ �����Ϸ��� ������ �� ���� ������ ������ ����.
}