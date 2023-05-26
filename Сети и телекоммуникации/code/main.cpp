#include <iostream>
#include <cstring>
using namespace std;

template <class X>
int find(X object, X* list, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(object == list[i]) return i;
	}
	return -1;
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	char *c = "Check";
	double b[] = {0.1, 0.2, 1.5, 2.0, 3.33};
	cout << find(3, a, 7) << " " << find('h', c, (int)strlen(c)) << " " << find(.0, b, 5) << endl;
	return 0;
}