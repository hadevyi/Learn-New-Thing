#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) { this->title = title; this->price = price; this->pages = pages; }
	void show() { cout << title << ' ' << price << "WON " << pages << "page" << endl; }
	string getTitle() { return title; }
	friend bool operator<(string s, Book op);		// Since it is a strng variable < Book variable, you must make it a friend. If it's Book < string, it's possible to function as a member.
};

bool operator<(string s, Book op)
{
	if (s < op.title)
		return true;
	else
		return false;
}

void main()
{
	Book a("Youth", 20000, 300);
	string b;
	cout << "Please enter a name for the book. >> ";
	getline(cin, b);

	if (b < a)
		cout << a.getTitle() << " is behind " << b << "!" << endl;
}