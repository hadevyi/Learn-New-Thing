#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string* tag;
	static string* info;
	static int num;
public:
	static void put(string s1, string s2);
	static void print(string s1 = "All");
};

int Trace::num = 0;
string* Trace::tag = new string[100];
string* Trace::info = new string[100];

void Trace::put(string s1, string s2)
{
	tag[num] = s1;
	info[num] = s2;
	num++;
}

void Trace::print(string s1)
{
	if (s1 == "All")
		cout << "----------------------------" << s1 << "Outputs Trace information." << "----------------------------" << endl;
	else
		cout << "----------------------------" << s1 << "Outputs Trace information for the tag." << "----------------------------" << endl;

	if (s1 == "All")
	{
		for (int i = 0; i < num; i++)
			cout << tag[i] << " : " << info[i] << endl;
	}
	else
	{
		for (int i = 0; i < num; i++)
			if (tag[i] == s1)
				cout << tag[i] << " : " << info[i] << endl;
	}
}

void f()
{
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ��� >> ";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

void main()
{
	Trace::put("main()", "���α׷� �����մϴ�.");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}