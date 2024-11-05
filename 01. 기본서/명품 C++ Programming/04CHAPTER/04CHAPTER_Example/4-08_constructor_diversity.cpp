#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle(){
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r){
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() { cout << "�Ҹ��� ���� radius = " << radius << endl; }

void Circle::setRadius(int r) { radius = r; }
double Circle::getArea() { return 3.14*radius*radius; }

void main(){
	int radius;

	while (true)
	{
		cout << "\n���� ������ �Է�(�����̸� ����)>> ";
		cin >> radius;

		if (radius < 0) { break; }

		Circle *p = new Circle(radius);
		cout << "���� ������ " << p->getArea() << endl;

		delete p;
	}
}