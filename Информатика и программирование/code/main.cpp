#include <iostream>
using namespace std;

class coord
{
	int x,y;
public:
	coord() {x=0; y=0;}
	coord(int x, int y): x(x), y(y) {}
	void get_xy(int &i, int &j) {i=x; j=y;}
	coord operator-(); //унарный
	coord operator-(coord ob); //бинарный
	coord operator=(coord ob);
};

coord coord::operator-()
{
	x=-x;
	y=-y;
	return *this;
}
coord coord::operator-(coord ob)
{
	x-=ob.x;
	y-=ob.y;
	return *this;
}
coord coord::operator=(coord ob)
{
	x=ob.x;
	y=ob.y;
	return *this;
}

int main()
{
	coord ob1(10,10), ob2(20,30);
	ob1 = ob1 - ob2;
	int i,j;
	ob1.get_xy(i, j);
	cout << i << " " << j << endl;
	ob1 = -ob1;
	ob1.get_xy(i, j);
	cout << i << " " << j << endl;
	ob1 = ob2;
	ob1.get_xy(i, j);
	cout << i << " " << j << endl;
	return 0;
}