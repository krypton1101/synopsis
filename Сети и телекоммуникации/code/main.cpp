#include <iostream>
using namespace std;

class base
{
public:
	int i;
	base(int x) {i=x;}
	//virtual void func() {}//cout << "base func() i=" << i << endl;}
};

class derived1: public base
{
public:
	derived1(int x): base(x) {}
	void func() {cout << "derived1 func() i^2=" << i*i << endl;}
};

class derived2: public base
{
public:
	derived2(int x): base(x) {}
	void func() {cout << "derived2 func() i*2=" << i+i << endl;}
};

int main()
{
	derived1 *p;
	base ob(10);
	derived1 ob1(10);
	derived2 ob2(10);
	// p = &ob; p->func();
	// p = &ob1; p->func();
	// p = &ob2; p->func();
	int i,j;
	for(i=0; i<10; i++)
	{
		j=rand();
		if(j%2) p=&ob1;
		else p=&ob2;
		p->func();
	}
	return 0;
}