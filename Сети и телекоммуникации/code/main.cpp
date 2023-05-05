#include <iostream>
using namespace std;

class Base
{
protected:
	int x;
public:
	void set_x(int n) {x=n;}
	void show_x() {cout << x;}
};

class Derived : public Base
{
	int y;
public:
	void set_y(int n) {y=n;}
	void show_y() {cout << y;}
	//void Base::set_x(int n);
};

int main()
{
	Derived ob;
	ob.set_x(10);
	ob.show_x();
	ob.set_y(20);
	ob.show_y();
	Base ob1;
	ob1.set_x(10);
	ob1.show_x();
	return 0;
}