#include <iostream>
using namespace std;

class MyVector {
	int *p;
	int size;
public:
	MyVector(int n = 100);
	~MyVector();
};

MyVector::MyVector(int n){
	p = new int[n];
	size = n;
}

MyVector::~MyVector(){
	delete[] p;
}

void main(){
	MyVector *v1, *v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);

	delete v1;
	delete v2;
}
// �� ������ ��½� �ƹ��� ���� ��µ��� �ʴ´�. �ٸ� �ý��� ���ο����� �迭�� �����Ҵ�Ǵ� ���̴�.