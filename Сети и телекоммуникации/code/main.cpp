#include <iostream>
using namespace std;
void Xhandler()
{
	try
	{
		throw 0;
	}
	catch(int) {cout << "Throw char*\n"; throw;}
}

int main()
{
	try
	{
		Xhandler();
	}
	catch(int) {cout << "Main char *" << endl;}
	return 0;
}