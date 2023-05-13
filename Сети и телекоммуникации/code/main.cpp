#include <iostream>
using namespace std;

class Base
{
	int x;
public:
	Base(int x) : x(x) {}
	//void show() {cout << "x = " << x << endl;}
};

class Derived1 : virtual public Base
{
	int y;
public:
	Derived1(int x) : Base(x) {}
	//void show() {cout << "y = " << y << endl;}
};

class Derived2 : virtual public Base
{
	int y;
public:
	Derived2(int x) : Base(x) {}
	//void show() {cout << "y = " << y << endl;}
};

class Derived3 : public Derived1, public Derived2
{
	int z;
public:
	Derived3(int x) : Derived1(x), Derived2(x) {}

// 	void showZ() {cout << "z = " << z << endl;}
};

int main()
{
	return 0;
}